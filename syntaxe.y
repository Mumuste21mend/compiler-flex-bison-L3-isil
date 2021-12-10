%{
int nbLigne = 1;
char sauvTyp[10];
char* sauvIdf;
char sauvOp;
char io = 'n';
char lang = 'n';
char list = 'n';
char strInstOut[250];
char strExp[250];
char a[1];
char sauvEnc;
%}
%union{
int Entier;
char* Chaine;
float Reel;
}
%token mc_import bib_io bib_lang bib_lst pvg err 
	mc_public mc_private mc_protected mc_class <Chaine>mc_int <Chaine>mc_chaine <Chaine>mc_reel
	parenthOuv parenthFer accoladeOuv accoladeFer <Chaine>IDF vrg crochetOuv crochetFer <Entier>CONST <Chaine>CONSTchCharac mc_Const <Chaine>IDFTab <Reel>CONSTR
	affecte mc_main mc_FOR <Chaine>Signe_Formattage
	mc_IF mc_ELSE mc_ELIF mc_ENDIF mc_STRUCT pointeur
	op_div op_fois op_plus op_moins op_equal op_notequal op_inf op_infORequal op_sup op_supORequal
	sig_format_entier sig_format_reel sig_format_chaine mc_IN mc_OUT
	mc_Liste lst_svt lst_add lst_rmv lst_rei mc_Iterate mc_allouer
%%
S: ListeBib HEADER_CLASS accoladeOuv CORPS accoladeFer {printf("Syntaxe correcte");YYACCEPT;}
;

ListeBib: BIB
		|BIB ListeBib
		|
;
BIB:mc_import Nom_BIB pvg                                                                   
;
Nom_BIB: bib_io {if(io == 'y')printf("error semantique bibliotheque double importe a la ligne %d \n ",nbLigne);else io = 'y';}
		|bib_lang {if(lang == 'y')printf("error semantique bibliotheque double importe a la ligne %d \n ",nbLigne);else lang = 'y';}
		|bib_lst {if(list == 'y')printf("error semantique bibliotheque double importe a la ligne %d \n ",nbLigne);else list = 'y';}
;

HEADER_CLASS: MODIFICATEUR mc_class IDF {ChangerCode($3,1);InsererType($3," ",1,sauvEnc);}
;
MODIFICATEUR: mc_public {sauvEnc='+';}
	|mc_private {sauvEnc='-';}
	|mc_protected {sauvEnc='*';}
;
CORPS: Partie_Dec_Var mc_main parenthOuv parenthFer accoladeOuv Partie_Instruction accoladeFer
;
Partie_Dec_Var:MODIFICATEUR TYPE ListeIDF pvg Partie_Dec_Var
	|MODIFICATEUR Dec_Const pvg  Partie_Dec_Var
	|MODIFICATEUR mc_Liste op_inf TYPE op_sup ListeIDFListe pvg Partie_Dec_Var
	|
;

TYPE: mc_chaine {strcpy(sauvTyp,$1);}
	|mc_int {strcpy(sauvTyp,$1);}
	|mc_reel {strcpy(sauvTyp,$1);}
;
UnIDF: IDF {
		InsererTaille($1, 1);
		if(DoubleDeclaration($1)==0)InsererType($1,sauvTyp,0,sauvEnc);
		else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);}
;
UnIDFCst: IDF {
		InsererTaille($1, 1);
		if(DoubleDeclaration($1)==0)InsererType($1,sauvTyp,1,sauvEnc);
		else printf("Erreur semantique double declaration de constante a la ligne %d\n",nbLigne);}
;
UnIDFTab: IDFTab {sauvIdf=yylval.Chaine;} SuiteIDFTab
;
SuiteIDFTab: crochetOuv CONST crochetFer {
					if(DoubleDeclaration(sauvIdf)==0){InsererType(sauvIdf,sauvTyp,0,sauvEnc);
					if($2>32767) printf("Erreur semantique, taille de tableau invalide a la ligne %d\n",nbLigne);
					InsererTaille(sauvIdf, $2);}
					else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);}
			| {if(DoubleDeclaration(sauvIdf)==0){InsererType(sauvIdf,sauvTyp,0,sauvEnc);
					InsererTaille(sauvIdf, 0);}
					else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);}
;
UnIDFList: IDF {
		ChangerCode($1,2);
		InsererTaille($1, 0);
		if(DoubleDeclaration($1)==0)InsererType($1,sauvTyp,0,sauvEnc);
		else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);}
;
ListeIDF: UnIDF
	 	| UnIDF vrg ListeIDF
		| UnIDFTab
		| UnIDFTab vrg ListeIDF
;
ListeIDFListe: UnIDFList
	| UnIDFList vrg ListeIDFListe
;


Dec_Const:mc_Const TYPE Liste_IDFConst
;
Liste_IDFConst: UnIDFCst Valeur
	|UnIDFCst Valeur vrg Liste_IDFConst
;
Valeur:affecte CONSTANTE {if(strcmp(sauvTyp,"Entier")!=0)printf("Incompatibilite de types a la ligne %d\n",nbLigne);}
	|affecte CONSTReel{if(strcmp(sauvTyp,"Reel")!=0)printf("Incompatibilite de types a la ligne %d\n",nbLigne);}
	|affecte CONSTchCharac{if(strcmp(sauvTyp,"Chaine")!=0)printf("Incompatibilite de types a la ligne %d\n",nbLigne);}
	|{PeutModifierConstante(yylval.Chaine,2);}
;
CONSTANTE: CONST {if($1>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
				if((sauvOp=='/')&&($1==0)) printf("Erreur semantique division sur zero a la ligne %d\n",nbLigne);}
	| op_moins CONST {if(yylval.Entier>32768) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);}
;
CONSTReel: CONSTR
	|op_moins CONSTR
;

Instruction: Inst_Boucle
	|Inst_If 
	|InstructionIOAFF pvg 
	|InstructionListe pvg {if(list=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);}
	|mc_allouer parenthOuv IDFTab vrg CONST parenthFer pvg {
													if(NonDeclare($3)==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
													if(TailleDe($3)>0)printf("Erreur semantique reallocation d'un tableau a la ligne %d\n",nbLigne);
													if(($5<1)||($5>32767)) printf("Erreur semantique taille de tableau non valable a la ligne %d\n",nbLigne);
													else InsererTaille($3,$5);}
;
Partie_Instruction: 
	|Instruction Partie_Instruction 
;
Inst_If:mc_IF parenthOuv Condition parenthFer accoladeOuv Partie_Instruction accoladeFer Suite_If
;
Suite_If:mc_ELSE accoladeOuv Partie_Instruction accoladeFer
	|mc_ELIF parenthOuv Condition parenthFer accoladeOuv Partie_Instruction accoladeFer Suite_If
	|
;
Inst_Boucle: mc_FOR parenthOuv Inst_Affectation pvg Condition pvg Inst_Affectation parenthFer accoladeOuv Partie_Instruction accoladeFer
	|mc_Iterate parenthOuv IDFListe parenthFer accoladeOuv Partie_Instruction accoladeFer
;
Condition: ExpressionValable OperandeLogique ExpressionValable 
	|ExpressionValable OperandeLogique Condition
;
OperandeLogique:op_inf
	|op_sup
	|op_infORequal
	|op_supORequal
	|op_equal
	|op_notequal
;
InstructionIOAFF: Inst_Affectation {if(lang=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);}
	|Inst_Lecture {if(io=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);}
	|Inst_Ecriture {if(io=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);}
;

Inst_Lecture:mc_IN parenthOuv Signe_Formattage vrg IDF parenthFer {
			if(NonDeclare($5)==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
			strcpy(strInstOut,$3);strcat(strInstOut,",");strcat(strInstOut,$5);
			ErreurFormatage(RespecteFormatage(strInstOut),nbLigne);
			}
			|mc_IN parenthOuv Signe_Formattage vrg IDFTab crochetOuv CONST crochetFer parenthFer{
			if(NonDeclare($5)==0) printf("Erreur semantique tableau non declare a la ligne %d\n",nbLigne);
			if($7>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
			if($7>=TailleDe($5)) printf("Index out of bounds a la ligne %d\n",nbLigne);
			strcpy(strInstOut,$3);strcat(strInstOut,",");strcat(strInstOut,$5);
 			ErreurFormatage(RespecteFormatage(strInstOut),nbLigne);
 			} 
;

Inst_Ecriture: DebEcriture ListeIDsOUT parenthFer {ErreurFormatage(RespecteFormatage(strInstOut), nbLigne);}
;
DebEcriture: OUT parenthOuv EcritureDe {strcat(strInstOut,yylval.Chaine);}
	|
;
EcritureDe : CONSTchCharac
	| Signe_Formattage
;
OUT:mc_OUT {strcpy(strInstOut,"");}
;
ListeIDsOUT: UniteeListIdOut ListeIDsOUT 
	|
;
UniteeListIdOut: vrg IDF {if(NonDeclare($2)==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
		strcat(strInstOut,",");
		strcat(strInstOut,$2);}
	|vrg IDFTab crochetOuv CONST crochetFer {
		if(NonDeclare($2)==0) printf("Erreur semantique tableau non declare a la ligne %d\n",nbLigne);
		if($4>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
		if($4>=TailleDe($2)) printf("Index out of bounds a la ligne %d\n",nbLigne);
		strcat(strInstOut,",");
		strcat(strInstOut,$2);}
;

Inst_Affectation: IDF affecte ExpressionValable {if(NonDeclare($1)==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
											if(Constante($1)==1) printf("Erreur semantique modification de constante a la ligne %d\n",nbLigne);
											else if(Constante($1)==2) PeutModifierConstante($1,1);
											if(affExp($1,strExp)==0) printf("Incompatibilite de types a la ligne %d\n",nbLigne);
											}
	|IDFTab crochetOuv CONST crochetFer affecte ExpressionValable{
		if(NonDeclare($1)==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
		if($3>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
		if($3>=TailleDe($1)) printf("Index out of bounds a la ligne %d\n",nbLigne);
		if(affExp($1,strExp)==0) printf("Incompatibilite de types a la ligne %d\n",nbLigne);
		}
;
ExpressionValable: InitExpressionValable Expression 
;
InitExpressionValable: {strcpy(strExp,"");}
;
Expression: E1 SuiteExpression
	|E2 SuiteExpression
	|E3 SuiteExpression
;
E1 :IDF {if(NonDeclare($1)==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
				a[0]=getType($1);
				strcat(strExp,a);
				}
;
E2 :IDFTab crochetOuv CONST crochetFer {
		if(NonDeclare($1)==0) printf("Erreur semantique tableau non declare a la ligne %d\n",nbLigne);
		if($3>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
		if($3>=TailleDe($1)) printf("Index out of bounds a la ligne %d\n",nbLigne);
		a[0]=getType($1);
		strcat(strExp,a);
		}
;
E3 :CONSTANTE {strcat(strExp,"n");}
	|CONSTchCharac {strcat(strExp,"c");}
	|CONSTReel {strcat(strExp,"r");}
;
SuiteExpression:Oper Expression
	|
;
Oper :OperandeArithmetique {a[0]=sauvOp;strcat(strExp,a);}
;
OperandeArithmetique:op_plus {sauvOp='+';}
	|op_moins {sauvOp='-';}
	|op_div {sauvOp='/';}
	|op_fois {sauvOp='*';}
;
InstructionListe: IDFListe lst_svt parenthOuv parenthFer  {nextInList(sauvIdf);}
	|IDFListe lst_add parenthOuv ExpressionValable parenthFer {addToList(sauvIdf);
		if(affExp(sauvIdf,strExp)==0) printf("Incompatibilite de types a la ligne %d\n",nbLigne);}
	|IDFListe lst_rmv parenthOuv parenthFer {if(removeFromList(sauvIdf)==-1) printf("Erreur semantique, pas d'element a supprimer a la ligne %d\n",nbLigne);}
	|IDFListe lst_rei parenthOuv parenthFer
;
IDFListe: IDF {strcpy(sauvIdf,$1);
				if(estListe($1)!=0) printf("Erreur semantique, instruction valable uniquement avec Liste a la ligne %d\n",nbLigne);}
%%
main()
{yyparse();
Afficher();
}

yywrap(){
}
yyerror(char*msg){
printf("Erreur syntaxique dans le projet compIsilA2020 a la ligne %d",nbLigne);
}

%{
#include "syntaxe.tab.h"
#include "foncti.h"
extern nbLigne;
extern YYSTYPE yylval;
%}
lettre [a-zA-Z]
chiffre [0-9]
symbol [ \t*/\-+?!$&@!%';,()]
cst {chiffre}+
cstReel {chiffre}+"."{chiffre}*
K ({lettre}|{chiffre})
idf "$"{lettre}({K}|_{K})*
idfTab "@"{lettre}({K}|_{K})*
K1 \"({K}({K}|{symbol}|#)*)?\"
K2 \""%"{K}(({K}|{symbol})*)?\"
K3 {K1}|{K2}   
Comment ##(#?([\n\"]|{symbol}|{K}))*##
%%
import return mc_import;
ISIL.io return bib_io;
ISIL.lang return bib_lang;
ISIL.list return bib_lst;
public return mc_public;
private return mc_private;
protected return mc_protected;
class return mc_class;
Entier {yylval.Chaine=strdup("Entier");
		return mc_int;}
Reel {yylval.Chaine=strdup("Reel");
		return mc_reel;}
Chaine {yylval.Chaine=strdup("Chaine");
		return mc_chaine;}
"," return vrg;
"{" return accoladeOuv;
"}" return accoladeFer;
"[" return crochetOuv;
"]" return crochetFer;
"(" return parenthOuv;
")" return parenthFer;
:= return affecte;
"+" return op_plus;
"-" return op_moins;
"/" return op_div;
"*" return op_fois;
"=" return op_equal;
"<" return op_inf;
">" return op_sup;
"<"= return op_infORequal;
">"= return op_supORequal;
!= return op_notequal;
In return mc_IN;
Out return mc_OUT;
If return mc_IF;
Else return mc_ELSE;
Elif return mc_ELIF;
\""%"{lettre}\" {yylval.Chaine=strdup(yytext);return Signe_Formattage;}
{idf} {if(yyleng<=25) {yylval.Chaine=strdup(yytext);
		Inserer(strdup(yytext),"idf");
		return IDF;
	}
	else printf("Erreur lexicale a la ligne %d avec l'entité %s Identifiant trop long\n",nbLigne,yytext);}
{idfTab} {if(yyleng<=25) {yylval.Chaine=strdup(yytext);
		Inserer(strdup(yytext),"idfTab");
		return IDFTab; 
	}
	else printf("Erreur lexicale a la ligne %d avec l'entité %s Identifiant trop long \n",nbLigne,yytext);}
{cst} {yylval.Entier=atoi(yytext);
	return CONST;}
{cstReel} {yylval.Reel=atof(yytext);
	return CONSTR;}
CONST return mc_Const;
{K3} {
		yylval.Chaine=strdup(yytext);
		return CONSTchCharac;
	}
main return mc_main;
FOR return mc_FOR;
Liste return mc_Liste;
Iterer return mc_Iterate;
.suivant return lst_svt;
.svt return lst_svt;
.ajouter return lst_add;
.supprimer return lst_rmv;
.reiterer return lst_rei;
Allouer return mc_allouer;
{Comment} {nbLigne = nbLigne + nbrRetLigne(yytext);}
[ \t]
; return pvg;
\n {nbLigne++;}
. {printf("Erreur lexicale a la ligne %d avec l'entite %s\n",nbLigne,yytext);
	return err;
	}

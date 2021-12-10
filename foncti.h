typedef struct {
	char NomEntite[25];
	char CodeEntite[10];
	char TypeEntite[10];
	int cst;
	int taille;
	char encapsulation;
}TypeTS;//Table des symboles
TypeTS tp[100];
typedef struct {
	char NomEntite[25];
	int taille;
	int posActuelle;
}TypeTListe;//Table dans laquelle on garde trace des avancements dans les listes
TypeTListe tls[100];

int CpTabSym=0,CpTabLis;	
int Recherche(char entite[]){ //Fait une recherche dans la table des symboles et renvoi la position de l'entite recherchee, -1 sinon
	int i = 0;
	while(i<CpTabSym){
	if(strcmp(entite,tp[i].NomEntite)==0)
		return i;
	i++;
	}
	return -1;
}
void Inserer(char nom[],char code[]){ //On y fait appel durant l'analyse lexicale, si l'entité n'est pas sur la table des symboles on l'ajoute
	if(Recherche(nom)==-1){
		strcpy(tp[CpTabSym].NomEntite,nom);
		strcpy(tp[CpTabSym].CodeEntite,code);
		CpTabSym++;
		}
}
void InsererType(char nom[],char type[],int cs,char enca){//On y fait appel durant l'analyse syntaxique, ajoute le type, si cst et encapsulation d'une variable
	int pos = Recherche(nom);
	if(pos!=-1){
			strcpy(tp[pos].TypeEntite,type);
			tp[pos].cst=cs;
			tp[pos].encapsulation=enca;
	}
}
void InsererTaille(char nom[],int taille){//Syntaxique, ajoute la taille d'un tableau
	int pos = Recherche(nom);
	if(pos!=-1){
		tp[pos].taille=taille;
	}
}
int DoubleDeclaration(char nom[]){ //renvoi 0 si l'entite n'a pas encore de type
	int pos=Recherche(nom);
	if(pos==-1)
		return -2;
	return(strcmp(tp[pos].TypeEntite,""));
}
void PeutModifierConstante(char nom[],int val){
	//val=2 pour oui et 1 pour non
	int pos=Recherche(nom);
	if(pos!=-1)
		tp[pos].cst=val;
}
void Afficher(){
	int i = 0;
	printf("\n--------------------------------------\nLA TABLE DES SYMBOLES\n--------------------------------------\nEnc |Nom                      |Code      |Type      |Cst|Taille");
	while(i<CpTabSym){
		printf("\n*%3c|%25s|%10s|%10s|%3d|%5d",tp[i].encapsulation,tp[i].NomEntite,tp[i].CodeEntite,tp[i].TypeEntite,tp[i].cst,tp[i].taille);
		i++;
	}
	i = 0;
	printf("\n--------------------------------------\nLA TABLE DES LISTES\n--------------------------------------\n Nom                      |Taille|Position");
	while(i<CpTabLis){
		printf("\n*%25s|%6d|%8d",tls[i].NomEntite,tls[i].taille,tls[i].posActuelle);
		i++;
	}
}
int NonDeclare(char nom[]){
	int i = Recherche(nom);
	return strcmp(tp[i].TypeEntite,""); //renvoi 0 si il n'y a pas de type sur la ligne => n'est pas déclaré
}
int Constante(char nom[]){ //renvoi 1 si l'entite est une constante
	int pos=Recherche(nom);
	if(pos==-1)
		return -2;
	return(tp[pos].cst);
}
int TailleDe(char nom[]){ //renvoi la taille d'un tableau
	int pos = Recherche(nom);
	if(pos==-1)
		return -2;
	return(tp[pos].taille);
}
int RespecteFormatage(char str[]){ //Pour verifier le formatage dans les instructions IN OUT (Nombre de parametres)
	//0 Si oui,    1 Si il manque des parametres,   2 Si il y a trop de parametres,     3 Si formattage incorrect
	int nbrParam = 0, i=strlen(str)-1,j;
	for(j = i;((j>=0)&&(str[j]!='"'));j--)
		if(str[j]==',')
			nbrParam++;
	int nbr=0;
	for(j = 1; ((j<=i)&&(str[j]!='"')); j++){
		if(str[j]=='%'){
			if(j==i)
				return 3; // Formattage incorrect
			if((str[j+1]!='d')&&(str[j+1]!='s')&&(str[j+1]!='f'))
				return 3; // Formattage incorrect
			nbr++;
			j++;
	}}
	if(nbr<nbrParam) return 2;
	if(nbr>nbrParam) return 1;
	return CorrespondanceTypes(str);
}
void ErreurFormatage(int err, int nbLigne){ //Renvoi le type d'erreur de formatage si il y en a (utilisé avec RespecteFormatage)
	switch(err){
		case 1 : printf("Erreur semantique, il manque des parametres a l'instruction a la ligne %d\n", nbLigne);break;
		case 2 : printf("Erreur semantique, il y a trop de parametres a la ligne %d\n", nbLigne);break;
		case 3 : printf("Erreur semantique, formattage errone a l'instruction a la ligne %d\n", nbLigne);break;
		case 4 : printf("Erreur semantique, incompatibilite de types a la ligne %d\n", nbLigne);break;
	}
}
char getType(char nom[]){ //Renvoi le type d'une variable en caractere pour etre utilisé dans les fonctions suivantes
	int pos = Recherche(nom);
	if(pos!=-1){
		if(strcmp(tp[pos].TypeEntite,"Chaine")==0)
			return 'c';
		if(strcmp(tp[pos].TypeEntite,"Entier")==0)
			return 'n';
		if(strcmp(tp[pos].TypeEntite,"Reel")==0)
			return 'r';
	}
	return 'E';
}
int CorrespondanceTypes(char str[]){ //Utilisée pour respecte formatage, verifie la correspondance des types
	char Sig[strlen(str)/2], Var[strlen(str)/2], Ch[2];
	strcpy(Sig,"");
	strcpy(Var,"");
	int i = 1;
	while(str[i]!='"'){
		switch(str[i]){
			case 'd':
			case 'f':
			case 's': 
			if(str[i-1]=='%'){
				Ch[0]=str[i];
				strcat(Sig,Ch);
			}
		}
		i++;
	}
	int j = strlen(str);
	i+=2;
	while(i<j){
		char idf[25];
		strcpy(idf,"");
		while((i<j)&&(str[i]!=',')){
			Ch[0]=str[i];
			strcat(idf,Ch);
			i++;
		}
		Ch[0]=getType(idf);
		strcat(Var,Ch);
		i++;
	}
	int v = strlen(Var), s = strlen(Sig);
	if(v<s) return 1;
	if(s>v) return 2;
	i = 0;
	while(i<s){
		if((Var[i]=='c')&&(Sig[i]!='s')) return 4;
		if((Var[i]=='n')&&(Sig[i]!='d')) return 4;
		if((Var[i]=='r')&&(Sig[i]!='f')) return 4;
		i++;
	}
	return 0;
}
char TypeRetourExpression(char s[]){ //Renvoi le type de retour d'une expression
	int i , l = strlen(s);
	int chaine = 0;
	if(l==1)
		return s[0];
	for(i=0;i<l;i++){
		if(s[i]=='c'){
			chaine = 1;
			if((i==0)&&(s[i+1]!='+'))
					return('E');
			if((i==l-1)&&(s[i-1]!='+')){
					return('E');}
			if((i!=0)&&(i!=l-1)){
				if(s[i+1]!='+'){
					return('E');
				}
				if(s[i-1]!='+'){
					return('E');
				}
			}
		}
		}
	if(chaine==1) 
		return('c');
	
	for(i=0;i<l;i++)
		if((s[i]=='r')||(s[i]=='/'))
			return 'r';
	
	return 'n';
}
int affExp(char nom[], char s[]){ //Verifie si le type de retour d'une expression est valable dans une affectation
	char type = getType(nom);
	char Exp = TypeRetourExpression(s);
	if(type==Exp)
		return 1;
	if((type=='r')&&(Exp=='n'))
		return 1;
	return 0;
	}
void ChangerCode(char nom[], int code){ //Pour differencier les listes et nom de classe des IDF de variables ds la table des symboles
	int pos = Recherche(nom);
	if(pos!=-1){
		if(code==1)
			strcpy(tp[pos].CodeEntite,"header");
		else {strcpy(tp[pos].CodeEntite,"liste");
			strcpy(tls[CpTabLis].NomEntite,nom);
			tls[CpTabLis].taille=0;
			tls[CpTabLis].posActuelle=0;
			CpTabLis++;
		}
	}
}
int estListe(char nom[]){ //renvoi 0 si l'entite est une liste
	int pos = Recherche(nom);
	if(pos!=-1){
		return strcmp(tp[pos].CodeEntite,"liste");
	}
	return -1;
}
int RechercherDansListes(char nom[]){
	int i = 0;
	while(i<CpTabLis){
	if(strcmp(nom,tls[i].NomEntite)==0)
		return i;
	i++;
	}
	return -1;
}
void addToList(char nom[]){
	int pos = RechercherDansListes(nom);
	if(pos!=-1){
		tls[pos].taille=tls[pos].taille+1;
		if(tls[pos].posActuelle==0)
			tls[pos].posActuelle=1;
	}
}
int removeFromList(char nom[]){
	int pos = RechercherDansListes(nom);
	if(pos!=-1){
		if((tls[pos].posActuelle==0)||(tls[pos].taille==0))
			return -1;
		else {
			tls[pos].taille=tls[pos].taille-1;
			if(tls[pos].posActuelle>tls[pos].taille)
				tls[pos].posActuelle=tls[pos].posActuelle-1;
			return 0;
		}
	}
	return -1;
}
void nextInList(char nom[]){
	int pos = RechercherDansListes(nom);
	if(pos!=-1){
		if(tls[pos].posActuelle<tls[pos].taille)
			tls[pos].posActuelle++;
	}
}
int nbrRetLigne(char* str){
	int x = 0,i;
	for(i=0;i<strlen(str);i++)
		if(str[i]=='\n')
			x++;
	return x;
}

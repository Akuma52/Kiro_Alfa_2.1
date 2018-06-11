#include <stdio.h>
#include <string.h>
#include <iostream>
#include <malloc.h>
#include <fstream>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#include <math.h>
#include "SerialClass.cpp"
#include <string.h>

/*to use this bott you simply have to start the program and it will automatically create the necessary files, 
ask you something and if you do not have the saved question proceed to save it and ask you about it soon*/

using namespace std;

int main(void){
	
	srand(time(NULL));
	
	system ("color 0C" );
	SetConsoleTitle("Kiro Alfa 2.0 (Estable)");
//Declaracion de variables.
int num,Qz=-1,CJ=1,sleep = 1000;
char Luca[100];
FILE* Preguntas1;
Preguntas1 = fopen("Preguntas1.txt","r");
FILE* P3;
pregunta2:	

pregunta:
int numRand;
int inutil=0;
num=1+rand()%(5-1);
srand(time(NULL));
int P = 0,B1=0,D1,Q1=0,ADMIN1, Tom1;
char A[100]=".", B[100]=".", C[100]=".", D[100]=".", E[100]=".", F[100]=".", G[100]=".",H[100]=".",I[100]=".",J[100]=".",K[100]=".",L[100]=".",M[100]=".",N[100]=".",O[100]=".",Q[100]=".",P23[100],P12[100],T[100],U[100],ADMIN[100],Mat2[100];
char DA[100] = ".",DB[100] = ".",DC[100] = ".",D100[100] = ".",DE[100] = ".",DF[100] = ".",DG[100] = ".",DH[100] = ".",DI[100] = ".",DJ[100] = ".",DK[100] = ".",DL[100] = ".",DM[100] = ".",DN[100] = ".",DO[100] = ".",DP[100] = ".";
FILE* Preguntas2;
FILE* P1;
FILE* P2;
FILE* P15;
FILE* P35;
FILE* POlvidalo = fopen("Olvidalo.txt","r");
FILE* POlvidalo1;
FILE* Mat;
P1 = fopen("Respuesta1.txt","r");
FILE * Preguntas;
P15 = fopen("Respuesta1.txt","r");
POlvidalo1 = fopen("Olvidalo1.txt","r");
Mat = fopen("Mat.txt","r");
switch (num){
	
case 3:	{
	
	bool Case3 = 0;
	CJ = 1;
	P3 = fopen ("Preguntas1.txt","r");
	fgets (Luca,100,P3);
	fgets (Luca,100,P3);
	Case3 = feof(P3);
    Tom1:
	if (Case3) {;}
    else{
	fgets (Luca,100,P3);
	CJ++;
	Case3 = feof(P3);
	goto Tom1;
	}
	int Qz12 = 0;
	fclose (P3);
	Qz12 = rand()%(CJ+1);
	
	P3 = fopen ("Preguntas1.txt","r");
	fgets (Luca,100,P3);
Qz12:
    if (Qz12 == Qz) {;}
    else{fgets (Luca,100,P3);
	Qz++;
	goto Qz12;
	}
	Qz = Qz+2;
	fclose (P3);	
	cout<<"             -"<<Luca;
		
	TOM2:
			
	cout<<"\n-";
			
	scanf ("%s",DA);
		
	scanf("%s",DB);
	if (strcmp(DB,H)==0){goto pregunta10;}		

    scanf("%s",DC);
	if (strcmp(DC,H)==0){goto pregunta10;}

	scanf("%s",D100);
	if (strcmp(D100,H)==0){goto pregunta10;}
	
	scanf("%s",DE);
	if (strcmp(DE,H)==0){goto pregunta10;}
	
	scanf("%s",DF);
	if (strcmp(DF,H)==0){goto pregunta10;}
	
	scanf("%s",DG);
	if (strcmp(DG,H)==0){goto pregunta10;}
	
	scanf("%s",DH);
	if (strcmp(DH,H)==0){goto pregunta10;}		

    scanf("%s",DI);
	if (strcmp(DI,H)==0){goto pregunta10;}

	scanf("%s",DJ);
	if (strcmp(DJ,H)==0){goto pregunta10;}
	
	scanf("%s",DK);
	if (strcmp(DK,H)==0){goto pregunta10;}
	
	scanf("%s",DL);
	if (strcmp(DL,H)==0){goto pregunta10;}
	
	scanf("%s",DM);
	if (strcmp(DM,H)==0){goto pregunta10;}
	
	scanf("%s",DO);
	if (strcmp(DO,H)==0){goto pregunta10;}
	
	scanf("%s",DP);
	if (strcmp(DP,H)==0){goto pregunta10;}
		
	cout<<"\n";
	pregunta10:
	
	int Cj1 = -1;	
	char Luca1[100], Resp[100] = "A1.txt", Resp1[] = "A.txt";

    numRand = rand ()% (3+1);
    switch (numRand){
    case 1: { fclose (P3);P3 = fopen("A.txt", "r");strcpy (Resp1, "A.txt");break;}	
    case 2: { fclose (P3);P3 = fopen("B.txt", "r");strcpy (Resp1, "B.txt");break;}		
    case 3: { fclose (P3);P3 = fopen("C.txt", "r");strcpy (Resp1, "C.txt");break;}
	default : { fclose (P3);P3 = fopen("A.txt", "r");strcpy (Resp1, "A.txt");break;}		
	}  

	FILE * P4 = fopen("A1.txt", "a");
	bool Boll;
    copy:
    	
	if (feof (P3)){fclose (P4);fclose (P3);
    Boll = (remove( Resp1 ));
	rename (Resp , Resp1);goto pregunta;}
	else {
	if (Qz == Cj1){
	
    fprintf(P4, DA);fprintf(P4, " ");
    if (strcmp(DB,".")==1){fprintf(P4, DB);fprintf(P4, " ");}
    if (strcmp(DC,".")==1){fprintf(P4, DC);fprintf(P4, " ");}
    if (strcmp(D100,".")==1){fprintf(P4, D100);fprintf(P4, " ");}
    if (strcmp(DE,".")==1){fprintf(P4, DE);fprintf(P4, " ");}
    if (strcmp(DF,".")==1){fprintf(P4, DF);fprintf(P4, " ");}
	if (strcmp(DG,".")==1){fprintf(P4, DG);fprintf(P4, " ");}
	if (strcmp(DH,".")==1){fprintf(P4, DH);fprintf(P4, " ");}
    if (strcmp(DI,".")==1){fprintf(P4, DI);fprintf(P4, " ");}
    if (strcmp(DJ,".")==1){fprintf(P4, DJ);fprintf(P4, " ");}
    if (strcmp(DK,".")==1){fprintf(P4, DK);fprintf(P4, " ");}
    if (strcmp(DL,".")==1){fprintf(P4, DL);fprintf(P4, " ");}
	if (strcmp(DM,".")==1){fprintf(P4, DM);fprintf(P4, " ");}
    if (strcmp(DN,".")==1){fprintf(P4, DN);fprintf(P4, " ");}
    if (strcmp(DO,".")==1){fprintf(P4, DO);fprintf(P4, " ");}
    if (strcmp(DP,".")==1){fprintf(P4, DP);}
    fprintf (P4,"\n");
    fgets (Luca1, 100, P3);
    goto copy1;
}
	fgets (Luca1, 100, P3);fprintf(P4, Luca1);copy1:Cj1++;goto copy;}		
		} 
	
	default:{goto GF;}
	
case 1: {
        fscanf (P15,"%s",P23);
        fscanf (POlvidalo,"%s",Luca);
        Tom:
		if (strcmp(P23,Luca)==0){goto GF;}
        if (feof (P1)){fgets(Luca,100,POlvidalo1);cout<<"\n             -"<<Luca;goto GF01;}
        else{fscanf(P1,"%s",P23);goto Tom;} 
        
       
	 GF01:
	 	
	 	POlvidalo = fopen("Olvidalo.txt","r");
	 	P1 = fopen("Respuesta1.txt","a");
	 	fgets (Luca,100,POlvidalo);
	 	fprintf (P1, "\n");
	 	fprintf (P1, Luca);
	 	fclose (P1);
	 	fgets (Luca,100,POlvidalo1);
	 	Preguntas1 = fopen("Preguntas1.txt","a");
	 	fprintf (Preguntas1, "\n");
	 	fprintf (Preguntas1, Luca);
	 	fclose (Preguntas1);
	
	cout<<"\n-";
		 
	scanf("%s",A);
    
	scanf("%s",B);
	if (strcmp(B,H)==0){goto A04;}		

    scanf("%s",C);
	if (strcmp(C,H)==0){goto A04;}

	scanf("%s",D);
	if (strcmp(D,H)==0){goto A04;}
	
	scanf("%s",E);
	if (strcmp(E,H)==0){goto A04;}
	
	scanf("%s",F);
	if (strcmp(F,H)==0){goto A04;}
	
	scanf("%s",G);
	if (strcmp(G,H)==0){goto A04;}
	
	scanf("%s",I);
	if (strcmp(I,H)==0){goto A04;}		

    scanf("%s",J);
	if (strcmp(J,H)==0){goto A04;}

	scanf("%s",K);
	if (strcmp(K,H)==0){goto A04;}
	
	scanf("%s",L);
	if (strcmp(L,H)==0){goto A04;}
	
	scanf("%s",M);
	if (strcmp(M,H)==0){goto A04;}
	
	scanf("%s",N);
	if (strcmp(N,H)==0){goto A04;}
	
	scanf("%s",O);
	if (strcmp(O,H)==0){goto A04;}
	
	scanf("%s",Q);
	if (strcmp(Q,H)==0){goto A04;}
	
	A04:
    P3 = fopen("A.txt", "a");
    fprintf (P3,"\n");
    fprintf(P3, A);fprintf(P3, " ");
    if (strcmp(B,".")==1){fprintf(P3, B);fprintf(P3, " ");}
    if (strcmp(C,".")==1){fprintf(P3, C);fprintf(P3, " ");}
    if (strcmp(D,".")==1){fprintf(P3, D);fprintf(P3, " ");}
    if (strcmp(E,".")==1){fprintf(P3, E);fprintf(P3, " ");}
    if (strcmp(F,".")==1){fprintf(P3, F);fprintf(P3, " ");}
	if (strcmp(G,".")==1){fprintf(P3, G);fprintf(P3, " ");}
	if (strcmp(I,".")==1){fprintf(P3, I);fprintf(P3, " ");}
    if (strcmp(J,".")==1){fprintf(P3, J);fprintf(P3, " ");}
    if (strcmp(K,".")==1){fprintf(P3, K);fprintf(P3, " ");}
    if (strcmp(L,".")==1){fprintf(P3, L);fprintf(P3, " ");}
    if (strcmp(M,".")==1){fprintf(P3, M);fprintf(P3, " ");}
	if (strcmp(N,".")==1){fprintf(P3, N);fprintf(P3, " ");}
    if (strcmp(O,".")==1){fprintf(P3, O);fprintf(P3, " ");}
    if (strcmp(Q,".")==1){fprintf(P3, Q);}
	fclose(P3);
	
	P3 = fopen("B.txt", "a");
    fprintf (P3,"\n");
    fprintf(P3, A);fprintf(P3, " ");
    if (strcmp(B,".")==1){fprintf(P3, B);fprintf(P3, " ");}
    if (strcmp(C,".")==1){fprintf(P3, C);fprintf(P3, " ");}
    if (strcmp(D,".")==1){fprintf(P3, D);fprintf(P3, " ");}
    if (strcmp(E,".")==1){fprintf(P3, E);fprintf(P3, " ");}
    if (strcmp(F,".")==1){fprintf(P3, F);fprintf(P3, " ");}
	if (strcmp(G,".")==1){fprintf(P3, G);fprintf(P3, " ");}
	if (strcmp(I,".")==1){fprintf(P3, I);fprintf(P3, " ");}
    if (strcmp(J,".")==1){fprintf(P3, J);fprintf(P3, " ");}
    if (strcmp(K,".")==1){fprintf(P3, K);fprintf(P3, " ");}
    if (strcmp(L,".")==1){fprintf(P3, L);fprintf(P3, " ");}
    if (strcmp(M,".")==1){fprintf(P3, M);fprintf(P3, " ");}
	if (strcmp(N,".")==1){fprintf(P3, N);fprintf(P3, " ");}
    if (strcmp(O,".")==1){fprintf(P3, O);fprintf(P3, " ");}
    if (strcmp(Q,".")==1){fprintf(P3, Q);}
	fclose(P3);
	
	P3 = fopen("C.txt", "a");
    fprintf (P3,"\n");
    fprintf(P3, A);fprintf(P3, " ");
    if (strcmp(B,".")==1){fprintf(P3, B);fprintf(P3, " ");}
    if (strcmp(C,".")==1){fprintf(P3, C);fprintf(P3, " ");}
    if (strcmp(D,".")==1){fprintf(P3, D);fprintf(P3, " ");}
    if (strcmp(E,".")==1){fprintf(P3, E);fprintf(P3, " ");}
    if (strcmp(F,".")==1){fprintf(P3, F);fprintf(P3, " ");}
	if (strcmp(G,".")==1){fprintf(P3, G);fprintf(P3, " ");}
	if (strcmp(I,".")==1){fprintf(P3, I);fprintf(P3, " ");}
    if (strcmp(J,".")==1){fprintf(P3, J);fprintf(P3, " ");}
    if (strcmp(K,".")==1){fprintf(P3, K);fprintf(P3, " ");}
    if (strcmp(L,".")==1){fprintf(P3, L);fprintf(P3, " ");}
    if (strcmp(M,".")==1){fprintf(P3, M);fprintf(P3, " ");}
	if (strcmp(N,".")==1){fprintf(P3, N);fprintf(P3, " ");}
    if (strcmp(O,".")==1){fprintf(P3, O);fprintf(P3, " ");}
    if (strcmp(Q,".")==1){fprintf(P3, Q);}
	fclose(P3);	
	 
		 inutil = 0;
		 POlvidalo = fopen ("Olvidalo","w");
		 POlvidalo1 = fopen ("Olvidalo1","w");
		 fprintf (POlvidalo,"."); 
		 fprintf (POlvidalo1,"."); 
		 fclose (POlvidalo);
		 fclose (POlvidalo1);
		 }
	 	
	 	
	 case 2:
	
	 GF:	
    GFA:
   	int numRand;
    P1 = fopen("Respuesta1.txt","r");
    numRand = rand ()% (3+1);
    switch (numRand){
    case 1: { P3 = fopen("A.txt", "r");break;}	
    case 2: { P3 = fopen("B.txt", "r");break;}		
    case 3: { P3 = fopen("C.txt", "r");break;}
	default : { P3 = fopen("A.txt", "r");break;}		
	}  
    //Registro de la pregunta del usuario.
	
	cout<<"\n-";
 Preguntas = fopen("Preguntas.txt", "w");
 char POPO [100];
 bool POO;
 POlvidalo = fopen("Olvidalo.txt","r");

fgets (POPO,100,POlvidalo);

if (strcmp (POPO,".")==0){POlvidalo = fopen("Olvidalo.txt","w");POlvidalo = fopen("Olvidalo.txt","a");POlvidalo1 = fopen("Olvidalo1.txt","w");POlvidalo1 = fopen("Olvidalo1.txt","a");}
else{POO = true;}
  
res: 
 scanf("%s",A);
 if(strcmp(A,H)==0){goto A0;}
 else {fprintf (Preguntas,A); if (POO){;}else{fprintf (POlvidalo,A);fprintf (POlvidalo1,A);fprintf (POlvidalo1," ");}goto res;}
A0:
	fclose(Preguntas);	
    fclose(POlvidalo),
    fclose(POlvidalo1);
//Declaracion de los archivos de la base de datos.

A:
//Analisis de la bases de datos para dar la respuesta.
fscanf (P1,"%s",P23);

P2 = fopen("Preguntas.txt","r");
fscanf (P2,"%s",P12);


fgets (U,100,P3);
B:
if (strcmp(P23,P12)==0){Sleep (sleep);cout<<"\n"<<"             -"<<U<<"\n";fclose (P3);
if (POO) {POlvidalo1 = fopen("Olvidalo1.txt","w");POlvidalo = fopen("Olvidalo.txt","w");fprintf(POlvidalo1,".");fprintf(POlvidalo,"."); 
fclose(POlvidalo);fclose(POlvidalo1);}goto pregunta;}
if (feof (P1)){;goto D;}
else{fscanf (P1,"%s",P23);fgets (U,100,P3);goto B;} 

D://Modo ADMIN.

if (strcmp(A,"BUG")==0){
int BUG = 0;	
cout<<"Bug?";Sleep (333);cout<<".";Sleep(333);cout<<".";Sleep(333);cout<<".";
Bug:
if (BUG == 1000000){goto pregunta;}	
else {BUG = BUG +1;cout<<"BUG";goto Bug;}
}

fgets (P12,100,P2);
if (strcmp(P12,"ADMIN")==0){cout<<"Introdusca su clave: ";}
else {goto D100;}
D01:
	scanf("%s",ADMIN);
if (strcmp(ADMIN,"clave")==0){cout<<"Correcto, Bienvenido ADMIN";}
else{cout<<"No";goto pregunta;}

No:
cout<<"\nQue desea hacer"<<"\n1)Revisar preguntas"<<"\n2)Cambiar clave"<<"\n3)Salir"<<"\n4)Mat"<<"\n5)Arduino"<<"\n6)Truco";
cout<<"\n";
cin>> ADMIN1;

switch (ADMIN1){

case 1: {
        if (strcmp(P23,P12)==0){cout<<U<<"\n";goto pregunta;}
        B15 :
		if (feof (P15)){goto D123;}
        fgets (P23,100,P15);fgets (U,100,P35);
		cout<<P23<<"--";
		cout<<U<<"\n";
		goto B15; 
          
        D123:
        
        cout<<"\n1)Borrar pregunta"<<"\n";
        cin>>ADMIN1;
        
		if (ADMIN1 == 1) {cout<<"Esta bien";system ("pause");}}
		
case 3: system("cls");goto pregunta2;		
		
		
		
case 4:{

A4: 
	cout<<"Introdusca la operacion:\n\n";
	
	int Mat1234 = 0;
	
    Preguntas = fopen("Preguntas.txt", "w");
	
		Mat = fopen("Mat.txt", "r");
	fgets (Mat2,100,Mat);
	
	MatA1:
	if (feof (Mat)){cout<<"\n\n-";}
    else{fgets (Mat2,100,Mat);cout<<"*"<<Mat2;goto MatA1;}
	
	scanf("%s",A);
	A0M1:
	fprintf(Preguntas, A);
	fclose (Preguntas);
	
	P2 = fopen("Preguntas.txt","r");
    fscanf (P2,"%s",P12);
	
	Mat = fopen("Mat.txt", "r");
	fscanf (Mat, "%s",Mat2 );
	
MatA:
if (strcmp(Mat2 , P12)==0){goto Mat100;}
if (feof (Mat)){cout<<"No se reconoce la operacion";goto No;}
else{fscanf (Mat,"%s",Mat2);Mat1234 = Mat1234 + 1;goto MatA;}
char But[100];

Mat100: switch (Mat1234){
	
	case 1 : {
	float Pa = 0, Pb = 0, Pc = 0, X10 = 0, X2 = 0,X1 = 0,XB = 0, XR= 0, PbP = 0,Pq = 0,PrP = 0,X20 = 0,Vx = 0, Vx1 = 0, Vx2 = 0,VYA = 0, VYB = 0, Vy = 0,PPA = 0,PPB = 0;
	
	cout<<"Introdusca A: ";
	cin>> Pa;
    cout<<"\nIntrodusca B: ";
    cin>> Pb;
    cout<<"\nIntrodusca C: ";
    cin>> Pc;
// Eto Saca X1 Y X2    
 XB = (Pb * -1);
 PbP = Pb * Pb;
 Pq = -4 * Pa * Pc;
 PrP = (PbP + Pq);
 
 XR = sqrt(PrP);
 
	X10 = XB + XR;
	X1 = X10 / (2 * Pa);
	
	X20 = XB - XR;
	X2 = X20 / (2 * Pa);
	
	//Eto Vx
	
	Vx = XB / (2 * Pa);
	
	cout<<"X1 es: "<<X1<<"\nX2 es: "<<X2<<"\nVx es: "<<Vx;
	
    VYA = Pa * (Vx * Vx);
	VYB = Pb * Vx;
		
	Vy = VYA + VYB + Pc;
	
	cout<<"\nVy es: "<<Vy<<"\n";
	system ("pause");
	
	
	int N1 = 0,N2 = 0;
	
	cout<<"Desea calcular los puntos (S/N): ";
	cin>> But;
	
	if (strcmp (But,"S")==0){ cout<<"\nIntrodusca el rango de numeros"<<"\nIntrodusca primer numero: ";
	cin>> N1;
	
	cout<<"\nIntrodusca segundo numero: ";
	cin>> N2;}
	
	else {cout<<"Desea realizar otra operacion(S/N): ";
	cin>> But;
	
	
	PP1:
	if (strcmp(But,"S")==0){goto A4;}
	
	else {goto pregunta;}
	}
	
	PP:
	if (N1 == N2 - 1){cout<<"Fin de la parabola\n";system("pause");cout<<"Desea continuar (S/N)";cin>> But;goto PP1;}
	else {
	int PP;
	PPA = Pa * (N1 * N1);
	
	PPB = Pb * N1;
	
	PP = PPA + PPB + Pc;
	
	cout<<N1<<": "<<PP<<"\n";
	
	N1 = N1 - 1;
	
	goto PP;
	//Juani del futuro, Azo pota madre cuanto tiempo llevas mejorando esto 28/10/2017, Pos demaciado 20/11/2017, Novatos 12/12/2017, Desde el año pasado que estoy 11/1/2018, aiuda no se que poner 24/1/2018
}
break;}

case 2 : {
	float HC22 = 0, H = 0, HC1 = 0, HC2 = 0, HH = 0, HC1B = 0, HC2B = 0;
	
	cout<<"Desea sacar la hipotenusa o el cateto: ";
	cin>> But;
	
	if(strcmp(But , "hipotenusa")==0) {
	
	cout<<"Introdusca cateto 1: ";
	cin>> HC1;
	
	cout<<"Introdusca cateto 2: ";
	cin>> HC2;
	
	HC1B = HC1 * HC1;
	
	HC2B = HC2 * HC2;
	
	HH = HC1B + HC2B;
	
	H = sqrt (HH);
	
	cout<<"\nLa hipotenusa es: "<<H;
	
	system ("pause");
	
    cout<<"\nDesea continuar (S/N)";
    cin>> But;
    
    if (strcmp(But,"S")==0){goto A4;}
    else{goto pregunta;}}
    
    else { 
	
	cout<<"\nIntrodusca Hipotenusa: ";
	cin>> H;
	
	cout<<"\nIntrodusca Cateto: ";
	cin>>HC1;
	
	HC1B = H * H;
	HC2B = HC1 * HC1;
	
	HH = HC1B - HC2B;
	
	HC22 = sqrt(HH);
	
	cout<<"\nEl cateto es: "<<HC22<<"\n";
	
	system ("pause");
	
	cout<<"Desea continua (S/N): ";
	cin>> But;
	
	if (strcmp(But , "S")==0){goto A4;}
	else {goto pregunta;}}}
    
	break;
	
	case 3 : {
	
	float VL = 0, Den = 0,Mas = 0;
	
	cout<<"Ingrese Masa: ";
	cin>> Mas;
	
	cout<<"Ingrese densidad: ";
	cin>> Den;
	
	VL = Mas / Den;
	
	cout<<"El volumen es: "<<VL<<"\n";
	system ("pause");
	
	cout<<"Desea continua (S/N): ";
	cin>> But;
	
	if (strcmp(But , "S")==0){goto A4;}
	else {goto pregunta;}	
	
	break;}
	
	case 4 : {  
    float Den = 0, Mas = 0, Vol = 0;
	
	cout<<"Introdusca la masa: ";
	cin>> Mas;
	
    cout<<"Introdusca el volumen: ";
	cin>>Vol; 
	
	Den = Mas  / Vol;
	cout<<"La densidad es: "<<Den<<"\n";
	
	cout<<"Desea continua (S/N): ";
	cin>> But;
	
	if (strcmp(But , "S")==0){goto A4;}
	else {goto pregunta;}
	} 
	
	case 5 : {
	
	float Den = 0, Mas = 0, Vol = 0;
	
	cout<<"introdusca el volumen: ";
	cin>>Vol; 
	
	cout<<"introdusca la densidad: ";
	cin>>Den;
	
	Mas = Vol * Den;
	
	cout<<"La masa es: "<<Mas<<"\n";
	
	cout<<"Desea continua (S/N): ";
	cin>> But;
	
	if (strcmp(But , "S")==0){goto A4;}
	else {goto pregunta;}
	
	}
	
	case 6 : {
		
		long double Fibo = 0, Fi1 = 0, Fi2 = 1,Fi3 = 0, Sopota = 0;
		
		cout<<"De cuantos numeros desea la secuencia: ";
		cin>>Fi3; 
		
		Sopota:
		if (Fi3 == Sopota){cout<<"\nSecuencia terminada";}
		else{
		cout<<Fibo<<"\n";
		Fi1 = Fibo;
		Fibo = Fi1 + Fi2;
		Fi2 = Fi1;
		Sopota = Sopota + 1;
		goto Sopota;
		}
		
	cout<<"Desea continua (S/N): ";
	cin>> But;
	
	if (strcmp(But , "S")==0){goto A4;}
	else {goto pregunta;}
		
		break;}}break;}
		
case 5: {
	char Com[100];
	bool Ard;
	Ard:
	FILE * Ardu = fopen("Arduino.txt","w");
	fclose (Ardu);
    cout<<"En que puerto se encuentra la placa: ";
    cin>>Com;
    Ardu = fopen ("Arduino.txt","a");
    fprintf (Ardu,"\\\\.\\COM"); 
    fprintf (Ardu,Com);
    fclose(Ardu);
    Ardu = fopen ("Arduino.txt","r");
    fgets (Com,100,Ardu);
    fclose (Ardu);
    Serial* Arduino = new Serial(Com);
    Ard = (Arduino->IsConnected ());

    if (Ard){;}
    else {cout<<"Coneccion fallida \n";goto Ard;}
    
    while( Arduino->IsConnected() ){
       
    //Tipos de comparacion arduino 
    //if (strcmp(A, "1") == 0)
    //if(A=="1")
    //value = atoi(inChar);
    //hercules
    //valor =strcmp(A,1);
    //if(valor==0)   
	    SAD:
        int Ardu;
        char Pal[100];
        
		cout<<"Que desea hacer :"<<"\n1)Encender Led\n"<<"2)Apagar Led\n"<<"3)Codigo Morse\n"<<"10)Encendido/Apagado LED\n"<<"11)Salir\n";
		cin>>Ardu;
		
		switch (Ardu){
			
		case 1:{
		char Pal[100] = "1";
        break;
		}
		
		case 2:{
		char Pal[100] = "2";	
			break;
		}
		
		case 3:{
			bool SAD = 0;
             char Pal[100] = "3";
             Arduino->WriteData (Pal,1);
             cout<<"Introdusca la palabra: ";
             AASD:
             cin>>Pal[0];
             Arduino->WriteData (Pal,1);
			 Sleep(1000);
			 Arduino->ReadData(Pal,100);
			 cout<<Pal;
			 SAD = (strcmp(Pal,"1")==0);
			 if(SAD){goto Ardui;}
			 else{goto AASD;}    
			break;
		}
		
		case 10:{
		
			
		int Put = 0, HO = 0, Vel = 0, Constancia = 0;	
			
		cout<<"Especifique cantidad de repeticiones: ";
		cin>>HO;
		cout<<"\nEspecifique velocidad: ";
		cin>>Vel;
		
		while (Vel <= 99){
		Vel++;
		Constancia = 1;
		}
		if (Constancia == 1){cout<<"Velocidad minima 100 Unidades\n";}
		HO = HO - 1;
		while (Put <= HO){
		char Pal[100] = "1";
		Arduino->WriteData(Pal,1);
		Arduino->ReadData(Pal,100);
		Sleep (Vel);	
		char Pal1[100] = "2";
		Arduino->WriteData(Pal1,1);
		Arduino->ReadData(Pal1,100);
		Sleep (Vel);
		Put++;
		}
		goto Ardui;
			break;
		}
		
		case 11:{
			system ("cls");
			inutil = 0;
			goto pregunta;
			break;
		}
	 	}
		cout<<"Arduino conectado"<<endl;
       
        cout<<"Enviando :"<<Pal<<endl;
        Arduino->WriteData(Pal,1);

        Sleep(500);

        Arduino->ReadData(Pal,100);
        cout<<"Recibido: "<<Pal<<endl;

        cout<<"-------------------"<<endl;
        goto Ardui1;
        Ardui:
        Arduino->ReadData(Pal,100);
        Arduino->ReadData(Pal,100);
        Ardui1:
        Sleep(1000);
        system ("pause");
        system ("cls");
	
    }
	break;
}

case 6: {
	system ("cls");
	FILE* Truco = fopen ("Truco.txt","r");
	char Carta[100];
	int Truc = 0, Car = 0, Sel = 0, Car0 = 0, Car1 = 0, Car2 = 0, Car3 = 0, Car4, Car5, Car6;
	bool Qoferta;
	
while (Truc <= 5){
Car = 0;
Car=rand() % 40 + 0;
Truc++;
Sel = 1;
Truco = fopen ("Truco.txt","r");
Truc:
	if(Car != Car0){;}
	else{Car++;goto Truc;}
while (Sel <= Car){
fgets(Carta,100,Truco);
Sel++;
}
Car0 = Car;
if (Truc == 4){cout<<"Jugador: \n";}
if (Truc == 1){Car1 = Car;cout<<Car<<"_";}
if (Truc == 2){Car2 = Car;cout<<Car<<"_";}
if (Truc == 3){Car3 = Car;cout<<Car;}
if (Truc == 4){Car4 = Car;cout<<Car<<": ";cout<<Carta<<"\n";}
if (Truc == 5){Car5 = Car;cout<<Car<<": ";cout<<Carta<<"\n";}
if (Truc == 6){Car6 = Car;cout<<Car<<": ";cout<<Carta<<"\n";}
}
}
	break;
}




D100:	   
//En el caso de que no se encuentre la pregunta se pasa a guardar y darle una respuesta.
	//Guardado de la pregunta desconocida. 
	cout<<"No sabria responderte\n";
    D1 = 1;
	switch (D1){
	
case 1 :{goto A100;break;}
case 2 :{goto pregunta;break;}
}

char Plvidalo[100];
A100:
	
    goto pregunta2;

}



return 0;}



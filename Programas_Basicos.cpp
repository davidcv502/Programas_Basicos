#include <iostream>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<iomanip>
using namespace std;

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}
char opcion;
int x=10, y=10;

void menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
main(){
menu();
	
	
	system("pause");
}

void menu(){
	int opcion;
cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
cout<<"2. Determinar si un numero es par o impar"<<endl;
cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
cout<<"4. Determinar si una palabra o un número es palindromo."<<endl;
cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
cout<<"6. Conversion de numeros enteros a letras"<<endl;
cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
cout<<"8. Una tabla de multiplicar"<<endl;
cout<<"9. Todas las tablas de multiplicar del 1 al 10"<<endl;
cout<<"10. Crear de forma grafica la multiplicacion manual (de 2 numeros enteros cuales sea)"<<endl;
cout<<"11. Conversión de números decimales a binario"<<endl;
cout<<"12. Conversión de números decimales a hexadecimales"<<endl;
cout<<"13. Crear Figuras Geométricas Básicas."<<endl;
cout<<"14. Mover un punto en toda la pantalla"<<endl;
cout<<"15. Simular un Cajero Automático (Autómata)"<<endl;
cout<<"16. Calcular la hipotenusa"<<endl;
cout<<"17. Salir"<<endl;
cin>>opcion;
system("cls");


switch(opcion)
{    
	case 1: 
	ejercicio1();
	break;
    
	case 2:
    ejercicio2();
    break;
    
	case 3:
    ejercicio3();
    break;
    
    case 4:
    ejercicio4();
    break;
    
    case 5:
    ejercicio5();
    break;
    
    case 6:
    ejercicio6();
    break;
    
    case 7:
    ejercicio7();
    break;
    
    case 8:
    ejercicio8();
    break;
    
    case 9:
    ejercicio9();
    break;
    
    case 10:
    ejercicio10();
    break;
    
    case 11: 
	ejercicio11();
	break;
    
	case 12:
    ejercicio12();
    break;
    
	case 13:
    ejercicio13();
    break;
    
    case 14:
    ejercicio14();
    break;
    
    case 15:
    ejercicio15();
    break;
    
    case 16:
    ejercicio16();
    break;
    
    default: 
    cout<<"Elija una opcion correcta";
}
}


void ejercicio1(){
int n1, n2, operacion, op1;
	char r;
	cout<<"Seleccione que operacion desea realizar"<<endl;
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Salir al menu principal"<<endl;
	cin>>op1;
	system("cls"); 
	switch(op1)
	{
	    case 1: 
	    do {
		cout<<"Ingrese el 1er numero"<<endl;
	    cin>>n1;
	    cout<<"Ingrese el 2do numero"<<endl;
	    cin>>n2;
	    operacion = n1 + n2;
	    cout<<"El resultado es: "<<operacion<<endl;
		cout<<"Si desea hacer otra suma presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		}while(r=='s' || r=='S');
		system("cls");
		return ejercicio1();
		break;
		
	    case 2:
	    do {
	    cout<<"Ingrese el 1er numero"<<endl;
	    cin>>n1;
	    cout<<"Ingrese el 2do numero"<<endl;
	    cin>>n2;
	    operacion = n1 - n2;
	    cout<<"El resultado es: "<<operacion<<endl;
	    cout<<"Si desea hacer otra resta presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		}while(r=='s' || r=='S');
		system("cls");
		return ejercicio1();
	    break;
	    
		case 3:
	    do {
	    cout<<"Ingrese el 1er numero"<<endl;
	    cin>>n1;
	    cout<<"Ingrese el 2do numero"<<endl;
	    cin>>n2;
	    operacion = n1 * n2;
	    cout<<"El resultado es: "<<operacion<<endl;
	    cout<<"Si esea hacer otra multiplicacion presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		}while(r=='s' || r=='S');
		system("cls");
		return ejercicio1();
	    break;
	    
	    case 4:
	    do {
	    cout<<"Ingrese el 1er numero"<<endl;
	    cin>>n1;
	    cout<<"Ingrese el 2do numero"<<endl;
	    cin>>n2;
	    operacion = n1 / n2;
	    cout<<"El resultado es: "<<operacion<<endl;
	    cout<<"Si desea hacer otra division presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		}while(r=='s' || r=='S');
		system("cls");
		return ejercicio1();
	    break;
	    case 5:
	    	return menu();
	    break;
	    default: 
	    cout<<"No esta en el rangon de opciones";
	}	    	
}

void ejercicio2(){
	int n1, result;
	char r;
	result = 0;
	cout<<"Compruebe si su numero es par o impar"<<endl;
	do{
		cout<<"Ingrese su numero: "<<endl;
		cin>> n1;
		result = n1 % 2;
	
		if (result == 0){
			cout<<"El numero que ingreso es un numero par"<<endl;
		}else{
			cout<<"El numero que ingreso es un numero impar"<<endl;
		}
		cout<<"Si desea ingresar otro numero presione (s/S), si no regresara al menu de principal"<<endl;
		cin>>r;
		system("cls");
	}while(r=='s' || r=='S');
	return menu();	
}

void ejercicio3(){
	int op1;
float n1, result;
char r;
cout<<"Seleccione una opcion"<<endl;
cout<<"1. Kilometros a millas"<<endl;
cout<<"2. Metros a pulgadas"<<endl;
cout<<"3. Libras a kilos"<<endl;
cout<<"4. Millas a kilometros"<<endl;
cout<<"5. Pulgadas a metros"<<endl;
cout<<"6. Kilos a libras"<<endl;
cout<<"7. Salir al menu principal"<<endl;
cin>>op1;
system("cls");
switch (op1)
{
	case 1:
		do{
			cout<<"Ingrese los kilometros"<<endl;
			cin>>n1;
			result = n1 / 1.609344;
			cout<<n1<<" kilometros equivale a "<<result<<" millas"<<endl;
			cout<<"Si desea hacer otra conversion presione (s/S), sino regresara al menu de seleccion"<<endl;
			cin>>r;
			system("cls");
		}while(r=='s' || r=='S');
		return ejercicio3();
	break;
	
	case 2:
		do{
			cout<<"Ingrese los metros"<<endl;
			cin>>n1;
			result = n1 * 39.3700787;
			cout<<n1<<" metros, equivale a "<<result<<" pulgadas"<<endl;
			cout<<"Si desea hacer otra conversion presione (s/S), sino regresara al menu de seleccion"<<endl;
			cin>>r;
			system("cls");
		}while(r=='s' || r=='S');
		return ejercicio3();
	break;
	
	case 3:
		do{
			cout<<"Ingrese las libras"<<endl;
			cin>>n1;
			result = n1 / 2.205;
			cout<<n1<<" libras, equivale a "<<result<<" kilos"<<endl;
			cout<<"Si desea hacer otra conversion presione (s/S), sino regresara al menu de seleccion"<<endl;
			cin>>r;
			system("cls");
		}while(r=='s' || r=='S');
		return ejercicio3();
	break;
	
	case 4:
		do{

			cout<<"Ingrese las millas"<<endl;
			cin>>n1;
			result = n1 * 1.609;
			cout<<n1<<" millas equivale a "<<result<<" kilometros"<<endl;
			cout<<"Si desea hacer otra conversion presione (s/S), sino regresara al menu de seleccion"<<endl;
			cin>>r;
			system("cls");
		}while(r=='s' || r=='S');
		return ejercicio3();
	break;
	
	case 5:
		do{
			cout<<"Ingrese las pulgadas"<<endl;
			cin>>n1;
			result = n1 / 39.37;
			cout<<n1<<" pulgadas, equivale a "<<result<<" metros"<<endl;
			cout<<"Si desea hacer otra conversion presione (s/S), sino regresara al menu de seleccion"<<endl;
			cin>>r;
			system("cls");
		}while(r=='s' || r=='S');
		return ejercicio3();
	break;
	
	case 6:
		do{
			cout<<"Ingrese los kilos"<<endl;
			cin>>n1;
			result = n1 * 2.205;
			cout<<n1<<" kilos, equivale a "<<result<<" libras"<<endl;
			cout<<"Si desea hacer otra conversion presione (s/S), sino regresara al menu de seleccion"<<endl;
			cin>>r;
			system("cls");
		}while(r=='s' || r=='S');
		return ejercicio3();
	break;
	
	case 7:
	return menu();
	break;
	
	default:
		cout<<"Opcion no disponible"<<endl;
}
}

void ejercicio4(){
	string texto;
    char r;
    int aux = 0, igual = 0;
    do{
    cout<<"Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout<<"La palabra ingresada es palindromo"<< endl;
    } else {
        cout<<"La palabra ingresada no es palindromo"<< endl;
    }
    	cout<<"Si desea hacer otra suma presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		system("cls");
	}while(r=='s' || r=='S');
		
    return menu();

}

void ejercicio5(){
	int n1, millar, centenas, decenas, unidades;
    char r;
    do{
    cout<<"Ingresa un numero ";
    cin>>n1;
    
    unidades = n1 % 10;
    
	n1 = n1 / 10;
    decenas = n1 % 10;
    n1 = n1 / 10;
    centenas = n1 % 10;
    
    millar = n1 / 10;
    
    
    switch (millar){
    	
    	case 1: cout<<"M"; break;
    	
    	case 2: cout<<"MM"; break;
    	
    	case 3: cout<<"MMM"; break;
	}
    
    switch (centenas){
    	
    	case 1: cout<<"C"; break;
    	
    	case 2: cout<<"CC"; break;
    	
    	case 3: cout<<"CCC"; break;
    	
    	case 4: cout<<"CD"; break;
    	
    	case 5: cout<<"D"; break;
    	
    	case 6: cout<<"DC"; break;
    	
    	case 7: cout<<"DCC"; break;
    	
    	case 8: cout<<"DCCC"; break;
    	
    	case 9: cout<<"CM"; break;
	}
    
    switch (decenas){
    	
    	case 1: cout<<"X"; break;
    	
    	case 2: cout<<"XX"; break;
    	
    	case 3: cout<<"XXX"; break;
    	
    	case 4: cout<<"XL"; break;
    	
    	case 5: cout<<"L"; break;
    	
    	case 6: cout<<"LX"; break;
    	
    	case 7: cout<<"LXX"; break;
    	
    	case 8: cout<<"LXXX"; break;
    	
    	case 9: cout<<"XC"; break;	
	}
    
    switch (unidades){
    	
    	case 1: cout<<"I"; break;
    	
    	case 2: cout<<"II"; break;
    	
    	case 3: cout<<"III"; break;
    	
    	case 4: cout<<"IV"; break;
    	
    	case 5: cout<<"V"; break;
    	
    	case 6: cout<<"VI"; break;
    	
    	case 7: cout<<"VII"; break;
    	
    	case 8: cout<<"VIII"; break;
    	
    	case 9: cout<<"IX"; break;	
	}    
    
    cout<<endl;
    cout<<"Si desea hacer otra conversion presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		system("cls");
	}while(r=='s' || r=='S');
	return menu();
}

void ejercicio6(){
	int x;
    char r;
    do{
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
    cout<<"Si desea escribir otro numero presione (s/S), si no regresara al menu de seleccion "<<endl;
		cin>>r;
		system("cls");
	}while(r=='s' || r=='S');
	return menu();
}

void ejercicio7(){
	 char r;
 double valor;
 int miles,cientos,unidades,decimales;

 char numeros[100][20] = 
 {
  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[10][20] = 
 {
  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 do{

 cout<< "Introduzca numero a transcribir: ";
 cin >> valor;

 miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;
 decimales = ((int) (valor*100.0))%100 ;

 if (miles)
 cout<<numeros[miles] << " mil ";
 
 if (cientos)
 cout<<centenas[cientos] << " ";
 
 if (unidades) 
 cout<<numeros[unidades];
 
 if (decimales)
 {
  if(miles || cientos || unidades)
  {
 cout<<" con ";
  }
 
 cout<<numeros[decimales] << " decimas.";
 }

 cout<<endl;
 
 cout<<"Si desea escribir otro numero presione (s/S), si no regresara al menu principal "<<endl;
		cin>>r;
		system("cls");
	}while(r=='s' || r=='S');
	return menu();

}

void ejercicio8(){
	    int number;
    number = 5;
    char r;
    cout<<"Tabla del 5"<<endl;
    cout<<"____________"<<endl;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
    
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}
void ejercicio9(){
	    int number;
    number = 5;
    char r;
    cout<<"Tabla del 5"<<endl;
    cout<<"____________"<<endl;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
    
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}

void ejercicio10(){	
   	int num1, num2, resultado;
   	char r;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	resultado=num1*num2;
	cout<<"      "<<num1<<endl;
	cout<<"X     "<<num2<<endl;
	cout<<"----------"<<endl;
	cout<<"      "<<resultado<<endl;
    
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
	}
}

void ejercicio11(){
	int decimal;
	short binario[8];
	char r;
	cout<<"Ingrese el calor decimal a convertir"<<endl;
	cin>>decimal;
	
	for (int i = 0; i < 8; i++){
		binario[i]=decimal % 2;
		decimal /=2;
	}
	cout<<"la conversion a binario es: "<<endl;
	for (int i = 7; i>=0; i--){
		cout<<binario[i];
	}
	cout<<endl;
	
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}

void ejercicio12(){
	int hexa[20];
	int decimal, residuo, resultado, i=0;
	char r;
	cout<<"ingresa el numero decimal a convertir: "<<endl;
	cin>>decimal;
	
	do
	{
		residuo = decimal %16;
		resultado = decimal / 16;
		hexa[i] = residuo;
		decimal = resultado;
		i++;
	 } while (resultado > 15);
	 hexa[20] = resultado;
	 
	 cout <<"la conversion a hexadecimal es: "<<endl;
	 for (int j = i; j >= 0; j--){
	 	if (hexa[j]==10){
	 		cout<<"A";
		 }
		 else if (hexa [j]==11){
		 	cout<<"B";
		 }
		 else if (hexa [j]==12){
		 	cout<<"C";
		 }
		 else if (hexa [j]==13){
		 	cout<<"D";
		 }
		 else if (hexa [j]==14){
		 	cout<<"E";
		 }
		 else if (hexa [j]==15){
		 	cout<<"F";
		 }
		 else{
		 	cout<< hexa[j];
		 }
	 }
    cout<<endl;
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}

void ejercicio13(){
	char r;
    cout << "    *****    "<<endl;
    cout << "  *      *"<<endl;
    cout << " *        *"<<endl;
    cout << "*          *"<<endl;
    cout << "*           *"<<endl;
    cout << " *         *"<<endl;
    cout << "  *       *"<<endl;
    cout << "   *     *"<<endl;
    cout << "    *****"<<endl;

    cout << "*********"<<endl;
    cout << "*       *"<<endl;
    cout << "*       *"<<endl;
    cout << "*       *"<<endl;
    cout << "*       *"<<endl;
    cout << "*********"<<endl;

    cout << "      *      "<<endl;
    cout << "     * *     "<<endl;
    cout << "    *   *    "<<endl;
    cout << "   *     *   "<<endl;
    cout << "  *       *  "<<endl;
    cout << " *         * "<<endl;
    cout << "*           *"<<endl;
    cout << "*************"<<endl;

    cout << "******************"<<endl;
    cout << "*                *"<<endl;
    cout << "*                *"<<endl;
    cout << "*                *"<<endl;
    cout << "******************"<<endl;

    cout << "      *      "<<endl;
    cout << "     * *     "<<endl;
    cout << "    *   *    "<<endl;
    cout << "   *     *   "<<endl;
    cout << "  *       *  "<<endl;
    cout << " *         * "<<endl;
    cout << "*           *"<<endl;
    cout << " *         * "<<endl;
    cout << "  *       *  "<<endl;
    cout << "   *     *   "<<endl;
    cout << "    *   *    "<<endl;
    cout << "     * *     "<<endl;
    cout << "      *      "<<endl;
    
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}

void ejercicio14(){
	char r;
	while(opcion!='z')
	{
		system("cls");
		gotoxy(x,y); cout<<".";
		opcion=getch();
		switch(opcion)
		{
			case 'w' : y--; break;
			case 's' : y++; break;
			case 'a' : x--; break;
			case 'd' : x++; break;
		}
	}
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
   	return menu();
	}
}

void ejercicio15(){
	int saldoin = 5000;
	int saldo, retiro, opcion;
	char r;

	cout<<"Bienvenido al Cajero BI"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Escoja la accion que desea realizar "<<endl;
	cout<<"1. Retirar Dinero"<<endl;
	cout<<"2. Ver saldo de cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opcion;
	
	if(opcion==1){
		cout<<"Ingresa la cantidad que desea retirar"<<endl;
		cin>>retiro;
		if(retiro>5000){
			cout<<"No tiene esta cantidad de dinero en su cuenta"<<endl;
			cin>>retiro;
		}
		saldo = saldoin-retiro;
		cout<<"Dinero en la cuenta: "<<saldo<<endl;;
	}
	else if(opcion==2){
		cout<<"El saldo de la cuenta es: "<<saldoin<<endl;
	}
	else if(opcion == 3){
		cout<<"Gracias por usar el Cajero BI"<<endl;
	}
	else{
		cout<<"Elija una opcion correcta del menu";
	}
	cin.get();
	
    cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}

void ejercicio16(){
	float a, o;
	char r;
	cout<<"Ingresa el lado adyacente del triangulo: "<<endl;
	cin>>a;
	cout<<"ingresa el lado opuesto del triangulo: "<<endl;
	cin>>o;
	cout<<setprecision(3)<<sqrt(a*a+ o*o)<<endl;
	cout<<"Si desea regresear al menu principal presione (s/S)"<<endl;
    cin>>r;
    system("cls");
    if (r=='S' || r=='s'){
    	return menu();
    	
	}
}

























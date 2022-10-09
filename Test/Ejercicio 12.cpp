/*Escribir un programa que permita calcular una boleta de pago de un trabajador. 
Los datos a ingresar son: código del trabajador, el número de horas normales, el 
número de horas extras y el pago normal. Además, se debe considerar lo siguiente: 
Las horas extras se pagan 40% más que una hora normal. La empresa otorga una 
bonificación del 30% del total del ingreso. Los descuentos son: ESSALUD 10% y 
IES 2% respectivamente.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
//Declarcion de variables	
	char cod[10];
	float h, valor, hex, pago, pagohex, pagot, bonif, desc,pagof;	
//Titulo del proceso	
	cout<<"BOLETA DE PAGO"<<endl;
//Ingresar los datos
	cout<<"\nCodigo de trabajador: "<<endl; cin>>cod;
	cout<<"\nIngrese el numero de horas trabajadas: "<<endl; cin>>h;
	cout<<"Ingrese el valor por hora de trabajo: "<<endl; cin>>valor;
	cout<<"Ingrese el numero de horas extras trabajadas: "<<endl; cin>>hex;
//Calcular el pago	
	pago=h*valor;
	pagohex=hex*(valor+(valor*0.4));
	pagot=pago+pagohex;
	bonif=pagot*0.3;
	desc=pago-(pago*0.1)-(pago*0.02);
	pagof=pagot+bonif-desc;
//Mostrar resultado	
	cout<<"\nEl pago es: "<<pago;
	cout<<"\nPago por horas extras: "<<pagohex;
	cout<<"\nPago por trabajo: "<<pagot;
	cout<<"\nBonificacion: "<<bonif;
	cout<<"\nDescuento Total: "<<desc;
	cout<<"\nPago Final: "<<pagof;
	return 0;
}

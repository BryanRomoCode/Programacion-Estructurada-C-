/*
Realizar programa que lea:

Edad
Sexo
Altura (metros)

Después de pedir los datos estos se deben mostrar
*/

#include<iostream>

using namespace std;

int main(){
	
	int edad; 
	char sexo[10];
	float altura;
	
	cout<<"\nDigita tu edad: "; cin>>edad;
	cout<<"\nDigita tu sexo: "; cin>>sexo;
	cout<<"\nDigita tu altura: "; cin>>altura;
	
	cout<<"\n\nOk, tu edad es: " <<edad;
	cout<<"\nOk, tu sexo es: "  <<sexo;
	cout<<"\nOk, tu altura es: " <<altura;
	
	
	return 0;
}

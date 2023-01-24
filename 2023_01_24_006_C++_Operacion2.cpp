/*
Programa que resuelve la ecuación: ((a+(b/c))/(d+(e/f))

*/


#include<iostream>

using namespace std;

int main(){
	
	float a, b, c, d, e, f, operacion = 0;
	
	cout<<"Digita el numero a: "; cin>>a;
	cout<<"Digita el numero b: "; cin>>b;
	cout<<"Digita el numero c: "; cin>>c;
	cout<<"Digita el numero d: "; cin>>d;
	cout<<"Digita el numero e: "; cin>>e;
	cout<<"Digita el numero f: "; cin>>f;
	
	operacion = (a+(b/c)) / (d+(e/f)) ;

	cout<<"\n\nEl resultado de la operación ((a+(b/c))/(d+(e/f)) es: "<<operacion<<endl;
	
	return 0;
}

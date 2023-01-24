/*
Imprimir la siguiente expresión: a/b +1

*/

#include<iostream>

using namespace std;

int main(){
	
	int a, b;
	float operacion;
	
	
	cout<<"Digita el primer numero (a): "; cin>>a;
	cout<<"Digita el segundo numero (b): "; cin>>b;
	
	operacion = ((a/b)+1);
	
	cout<<"\n\nEl resultado de la operacion a/b + 1 es: "<<operacion;

	return 0;
}

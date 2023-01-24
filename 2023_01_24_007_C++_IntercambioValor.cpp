/*
Intercambiar el valor de dos variables
*/

#include<iostream>

using namespace std;

int main(){
	
	int x, y, intercambio;
	
	cout<<"Digita el primer valor: "; cin>>x;
	cout<<"Digita el segundo valor: "; cin>>y;
	
	intercambio =  x;
	x = y;
	y = intercambio;
	
	cout<<"Los valores ahora son: \n"<<x<<"\n"<<y;	
	
	
	return 0;
}

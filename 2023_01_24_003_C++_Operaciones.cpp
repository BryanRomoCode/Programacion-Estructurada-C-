/* Leer 2 numeros e imprimir la suma, resta, multiplicación y división
*/

#include<iostream>

using namespace std;

int main(){
	
	int n1, n2, suma = 0, resta = 0, mult = 0, div = 0;
	
	cout<<"Digita el primer numero: "; cin>>n1;
	
	cout<<"Digita el segundo numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	cout<<"\nEl resultado de la suma es: "<<suma; 
	cout<<"\n\nEl resultado de la resta es: "<<resta;
	cout<<"\n\nEl resultado de la multiplicacion es: "<<mult;
	cout<<"\n\nEl resultado de la division es: "<<div;

	
	
	return 0;
}

/*
La sentencia if 

if (condicion){



}else {

}


*/

#include<iostream>

using namespace std;

int main(){
	
	int numero, dato = 5;
	
	cout<<"Digite el numero: ";cin>>numero;
	
	if (numero >= 5){
		
		cout<<"El numero es mayor o igual a 5"; 
	}
	
	else {
		
		cout<<"El numero es menor a 5";
	}
	return 0;
}

/*
Calificacion es la media de 3 notas:
Practicas 30%
Teor�a 60%
Participaci�n 10%

Entrada de 3 notas y la salida es su nota final
*/

#include <iostream>

using namespace std;

int main(){
	
	float practicas, teoria, participacion, cal_final, cal_prac, cal_teoria, cal_part;
	
	cout<<"Digite la nota de practica: "; cin>>practicas;
	cout<<"Digite la nota de teoria: "; cin>>teoria;
	cout<<"Digite la nota de participacion: "; cin>> participacion;
	
	cal_prac = ((practicas*30)/100);
	cal_teoria = ((teoria*60)/100);
	cal_part = ((participacion*10)/100);
	
	cal_final = (cal_prac + cal_teoria + cal_part);
	
	cout<<"En base a las notas, la calificaci�n final es: " <<cal_final;
	
	return 0;
}

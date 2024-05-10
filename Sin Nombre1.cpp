/*Tabla de cuadrados y cubos:
Muestra en una tabla los cuadrados y cubos de los 5 primeros números enteros a partir
de uno introducido por teclado.*/

#include<iostream>
#include<clocale>
#include<cmath>

using namespace std;

int main (){
	
	setlocale(LC_ALL,"spanish");
	
	int n,cuad,cub; //defini las variables n para almacenar el valor que ingresa el usuario, cuad para calcular los cuadrados y cub para el cubo
	
	cout<<"Ingrese un número del 1 al 5 para determinar su cubo o cuadrado: ";
	cin>>n;
	cout<<"Tabla de cuadrados y cubos "<<endl;
	for(int i=1,i2=1; i<=n,i2<=n;i++,i2++){
	    cuad=pow(i,2);
	    cub=pow(i2,3);
		cout<<i<<"^"<<"2"<<"="<<cuad<<"    |"<<i2<<"^"<<"3"<<"="<<cub<<"               |"<<endl;
		
	}
	
	
	cin.get();
}
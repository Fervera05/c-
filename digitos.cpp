/*Cuenta la cantidad de dígitos que tiene un número introducido por teclado.*/
#include<iostream>
#include<clocale>

using namespace std;

int main(void){
	setlocale(LC_ALL,"spanish");
	
	int n,cont=1;//declaramls nuestras variables n y cont(contador) iniciado en 1
	
	cout<<"Introduce un número para contar sus dígitos: ";cin>>n;
	
	while(n>=10){//mientras n no sea mayor o igual a 10 la condicion no se cumple y por ende no va a empezar
		n=n/10;//dividimos por 10 el valor ingresado por el usuario 
		cont++;//contador
	}
	cout<<cont;//imprimimos el resultado
	
	cin.get();

}
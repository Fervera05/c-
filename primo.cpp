//Determina si un número introducido por teclado es o no primo.

#include <iostream>//libreria de entrada y salida input ouput

#include<clocale>//libreria utilizada para agregar caracteres especiales al programa

using namespace std;//para no escribir std:: una y otra vez

int main(void) {
	
	setlocale(LC_ALL,"spanish");//funcion utilizada por la libreria clocale
	
      int n1;//declaramos nuestra primera variable para almacenar el valor que ingresa el usuario
      
      bool p=1;//declaramos una variable booleana que sea verdadera antes de la ejecucuión
      
      cout<<"Ingrese un numero primo:"; //por medio de este mensaje le pedimos al usuario que ingrese el valor
      
      cin>>n1;//almacenamos el dato en la primera variable
      
      for(int i=2; i<n1 ;i++){ //realizamos un bucle for que empiece desde el numero 2
      
      	if(n1 % i ==0){//si el residuo de la division te da 0 es porque es un divisor de muchos numeros
      	
      		 p = 0; //el valor de la variable booleana será falso
      		 
		  }//cierra el if
		  
      }//cierra el for
      
	if(p==1){ //si la variable p es verdadera va a imprimir
	
		cout<<"El numero es primo";
		
	}//cierra el if
	
	else{ //y sino va a imprimir esto
	
	cout<<"El numero no es primo";
	 	
	} //cierra el else
	
}//cierra el int main

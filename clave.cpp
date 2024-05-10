#include<iostream>
#include<cstdlib>
using namespace std;

int main(){	
	int num_usu;
	int num_in=10;
	int num_inres=num_in;
	int clave=1234;
	int cont=0;
	
	while(num_inres > 0){
	    cout<<"Bienvenido al juego de adivinanza"<<endl;
		cout<<"Tienes "<<num_inres<<" intentos"<<endl;
		cout<<"Introduce una clave de 4 digitos: ";
		cin>>num_usu;
	
cont++;		
		if(	to_string(num_usu).length()==4){
		
		}else{
				cout<<"el numero debe tener cuatro";
		}
		if(num_usu == clave){
			cout<<"Felicidades has adivinado la clave." <<endl<<" La cantidad de intentos realizados: "<<cont;
			break;	
		}else{
				cout<<"Clave incorrecta :("<<endl;
				system("cls");
   	    }
	num_inres--;
     }
        if(num_inres == 0){
        	cout<<"Has utilizado todos tus intentos";
		}
	return 0;
}
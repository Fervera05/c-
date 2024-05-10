#include<iostream>

using namespace std;

int main(){
	int n1, n2,r;
	
	cout<<"Ingresa el primer numero entero positivo: ";
	cin>>n1;
	cout<<"Ingresa el segundo numero entero positivo: "<<endl;
	cin>>n2;
	if(n1<=0 || n2<=0){
		cout<<"Favor ingrese un numero entero positivo";
		return 1;
	}
	for(int n=0; n<n2; ++n){
		r+=n1;
	}
		cout<<r;
	cin.get();
	return 0;
} 
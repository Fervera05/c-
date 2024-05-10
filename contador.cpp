#include<iostream>
#include<clocale>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
    int n[10],p,ng;
    
    cout<<"Ingrese 10 numeros ";
    
    for(int i; i<=10; i++){
    	cin>>n[i];
    	if(n[i] > 0){
    		p++;
		}
		 else if(n[i] < 0){
    		ng++;
		}
	
	}
		cout<<p<<"  "<<ng;
}

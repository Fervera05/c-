#include<iostream>

using namespace std;

int main(){
	int n1=0,n2=1,sg,n;
	
	cout<<"Ingrese un numero para la serie de fibonacci: ";
	cin>>n;
	
	for(int i=1; i<=n; ++i){
		if(i==1){
			cout<<n1<<", ";
			continue;
		}
		if(i==2){
			cout<<n2<<", ";
			continue;
		}
			sg=n1+n2;
	n1=n2;
	n2=sg;
	
	cout<<sg<<", ";
	}

}
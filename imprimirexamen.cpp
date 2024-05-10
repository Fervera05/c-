#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"ingrese el primer numero: ";
	cin>>n1;
	cout<<"ingrese el segundo numero: ";
	cin>>n2;
	
	for(n1=0,n2=1; n1<=n2; n1++, n2++){
		cout<<n1;
	}
	
	return 0;
}
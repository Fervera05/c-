#include<iostream>
#include<string>

using namespace std;

int main(){
   int n1,n2,n3,n4,r;
   
   cout<<"Ingrese el primer numero: ";
   cin>>n1;
   cout<<"Ingrese el segundo numero: ";
   cin>>n2;
   cout<<"Ingrese el tecer numero: ";
   cin>>n3;
   cout<<"Ingrese el cuarto numero: ";
   cin>>n4;

   int num = n1*1000+n2*100+n3*10+n4;
   r=num*2;
   cout<<num<<endl;
   cout<<r;

cin.get();
return 0;
}
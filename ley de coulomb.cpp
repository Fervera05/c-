#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double f,k,q1,q2,d;
	k=9*pow(10,9);
	q1=6*pow(10,-5);
	q2=-4*pow(10,-5);
    d=pow(0.1,2);
    
	f=(k*q1*q2)/d;
	
	cout<<"la fuerza es "<< fabs(f);
	
	return 0;
	
}
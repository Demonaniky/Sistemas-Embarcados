// Cap�tulo 1
// Exerc�cios 1.3


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << ("Tabuada do N�mero 3\n") << endl;
	
	for(int i = 0; i <= 10; i++){
		cout << ("3 x ")<< i << (" = ") << 3*i << endl;
			
	}	
	
	return 0;	
}



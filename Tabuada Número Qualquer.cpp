// Capítulo 2
// Exercícios 2.2


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	cout << ("Digite um número: ") << endl;
	cin >> n;
	
	cout << ("\nTabuada do Número ") << n << endl << endl;
	
	for(int i = 0; i <= 10; i++){
		cout << n << (" x ")<< i << (" = ") << n*i << endl;
			
	}	
	
	return 0;	
}



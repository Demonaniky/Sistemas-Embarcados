// Cap�tulo 2
// Exerc�cios 2.2


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	cout << ("Digite um n�mero: ") << endl;
	cin >> n;
	
	cout << ("\nTabuada do N�mero ") << n << endl << endl;
	
	for(int i = 0; i <= 10; i++){
		cout << n << (" x ")<< i << (" = ") << n*i << endl;
			
	}	
	
	return 0;	
}



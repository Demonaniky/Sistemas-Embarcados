// Cap�tulo 3
// Exerc�cios 3.2


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int lado, area, perimetro;
	
	cout << ("Digite o lado do quadrado: ") << endl;
	cin >> lado;
	
	perimetro = lado*4;
	area = lado * lado;
	
	cout << ("\nO Per�metro do quadrado �: ") << perimetro << endl;
	cout << ("A �rea do quadrado �: ") << area << endl;
	
	
	return 0;	
}



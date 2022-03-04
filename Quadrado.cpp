// Capítulo 3
// Exercícios 3.2


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
	
	cout << ("\nO Perímetro do quadrado é: ") << perimetro << endl;
	cout << ("A área do quadrado é: ") << area << endl;
	
	
	return 0;	
}



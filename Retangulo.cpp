// Capítulo 3
// Exercícios 3.3


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int base, altura, area, perimetro;
	
	cout << ("Digite a base do retangulo: ") << endl;
	cin >> base;
	
	cout << ("Digite a altura do retangulo: ") << endl;
	cin >> altura;
	
	perimetro = (base*2) + (altura*2);
	area = base * altura;
	
	cout << ("\nO Perímetro do quadrado é: ") << perimetro << endl;
	cout << ("A área do quadrado é: ") << area << endl;
	
	
	return 0;	
}



// Cap�tulo 3
// Exerc�cios 3.3


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
	
	cout << ("\nO Per�metro do quadrado �: ") << perimetro << endl;
	cout << ("A �rea do quadrado �: ") << area << endl;
	
	
	return 0;	
}



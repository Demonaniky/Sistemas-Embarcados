// Cap�tulo 1
// Exerc�cios 1.1 e 1.2


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nalunos, nalunas;
		
	cout << ("Digite o n�mero de Alunos")<< endl;
	cin >> nalunos;
	
	cout << ("Digite o n�mero de Alunas")<< endl;
	cin >> nalunas;
		
	cout << ("\nO n�mero de Alunos � de: ")<< nalunos << (", e o n�mero de Alunas � de: ") << nalunas << endl;
	cout << ("O n�mero de Alunas � de: ")<< nalunas << (", e o n�mero de Alunos � de: ") << nalunos << endl;
	
		
	return 0;	
}



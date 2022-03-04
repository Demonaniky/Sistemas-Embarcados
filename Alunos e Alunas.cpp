// Capítulo 1
// Exercícios 1.1 e 1.2


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nalunos, nalunas;
		
	cout << ("Digite o número de Alunos")<< endl;
	cin >> nalunos;
	
	cout << ("Digite o número de Alunas")<< endl;
	cin >> nalunas;
		
	cout << ("\nO número de Alunos é de: ")<< nalunos << (", e o número de Alunas é de: ") << nalunas << endl;
	cout << ("O número de Alunas é de: ")<< nalunas << (", e o número de Alunos é de: ") << nalunos << endl;
	
		
	return 0;	
}



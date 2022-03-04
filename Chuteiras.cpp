// Capítulo 2
// Exercícios 2.1


#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int chuteirasA, chuteirasB, chuteirasC;
		
	cout << ("Digite a quantidade de chuteiras da marca A: ")<< endl;
	cin >> chuteirasA;
	
	cout << ("Digite a quantidade de chuteiras da marca B: ")<< endl;
	cin >> chuteirasB;
	
	cout << ("Digite a quantidade de chuteiras da marca C: ")<< endl;
	cin >> chuteirasC;
		
	cout << ("\nA quantidade de chuteiras da marca A é de: ")<< chuteirasA << endl;
	cout << ("A quantidade de chuteiras da marca B é de: ")<< chuteirasB << endl;
	cout << ("A quantidade de chuteiras da marca C é de: ")<< chuteirasC << endl;
		
	return 0;	
}



#include <iostream>
#include <stdlib.h>
using namespace std;

void fibonacci(int tam);

int main(){
	int op, i;
    char other;
	
	inicio:
	system("cls");
	
	cout << "------- Menu -------\n";
	cout << "Digite ate que digito deseja calcular fibonacci: \n";
	cout << "Digite sua opcao -> ";
	cin >> op;

    cout << "A sequencia de fibonacci com " << op << " digitos e: ";
	fibonacci(op);
    cout << "\n\n\nDeseja calcular um novo digito? (s/n) ";
    cin >> other;
    
    if(other == 's' || other == 'S'){
        goto inicio;
    } else {
        cout << "\nObrigado por utilizar o programa, finalizando...";
    }

	return 0;
}

void fibonacci(int tam){

	int n1 = 0, n2 = 1, seq, i;
	switch (tam){
		case 0:
			cout << n1;
			break;
		case 1:
			cout << n1 << ", " << n2; 
			break;
		default:
			cout << n1 << ", " << n2; 
			for (i=0; i<tam; i++){
				seq = n1 + n2;
				n1 = n2;
				n2 = seq;
				cout << ", " << seq;
			}
	}
}

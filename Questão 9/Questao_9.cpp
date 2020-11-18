#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int pesquisa_linear(int *vetor, int tam, int proc);

int main(){
	
	int num_serie[10];
	string produto[10];

	int op, i, num, tam = 0;

	inicio:
	system("cls");

	cout << "\n---------- MENU ----------\n";
	cout << "[1] - Registrar Produto\n";
	cout << "[2] - Consultar Produto\n";
	cout << "[3] - Sair\n";
	cout << "Opcao: ";
	scanf("%d", &op);

	switch(op){
		case 1:
			cout << "\nDigite o numero de serie do produto: ";
			scanf("%d", &num_serie[tam]);
			cout << "\nDigite o nome do produto: ";
			cin >> produto[tam];
			tam++;
			break;
		case 2:
			if (tam == 0){
				cout << "\nRegistre o primeiro produto\n";
			} else {
				cout << "\nQual o numero de serie que voce deseja pesquisar: ";
				cin >> num;

				int pos = pesquisa_linear(num_serie, tam, num);
				if (pos == -1){
					cout << "\nProduto nao encontrado.";
				} else {
					cout << "\nNome do produto: " << produto[pos] << "\n";
				}
			}
			system("pause");
			break;
		case 3:
			cout << "\nObrigado por utilizar o programa, finalizando...\n";
			system("pause");
			return 0;
		default:
			cout << "\nDigite uma opcao valida... [1], [2] ou [3]";
	}
	goto inicio;
}



int pesquisa_linear(int *vetor, int tam, int proc){
	int i;
	for(i=0; i<tam; i++){
		if (*vetor == proc){
			return i;
		}
		*vetor++;
	}
	return -1;
}
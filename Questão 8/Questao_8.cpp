#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

using namespace std;

int main(){
	int contador = 0;
	char *string;

	string = (char *) malloc(sizeof(char)+1);
	cout << "Digite a string que voce deseja saber o tamanho: ";
	gets(string);
	
	do{
		contador++;
	} while (string[contador] != '\0');
	
	cout <<"\nO tamanho da string digitada atraves do metodo e: " << contador;
	cout <<"\nO tamanho da string obtida atraves do strlen() e: " << strlen(string);
}

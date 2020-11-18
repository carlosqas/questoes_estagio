#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

using namespace std;

int main(){
	int i;
	char *string, *ini, *fim, aux;

	string = (char *) malloc(sizeof(char)+1);

	cout << "Digite a string que voce deseja inverter: ";
	gets(string);
	
	ini = &string[0];
	fim = &string[strlen(string)-1];

	while(ini < fim){
		aux = *ini;
		*ini = *fim;
		*fim = aux;

		fim--;
		ini++;
	}

	cout << "\n" << string;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char nome[21];
	int t, i=0;

	printf ("Digite seu nome:");
	scanf("%s", nome);

	t = strlen(nome);

	for (i=0; i < t; i++){
		for (int j=0; j <= i; j++){
			printf("%c", nome[j]);	
		}
		printf ("\n");
	}

	return 0;
}
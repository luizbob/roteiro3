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
		printf("%c\n", nome[i]);
	}

	return 0;
}
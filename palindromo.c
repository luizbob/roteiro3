#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char palavra[21], invertida[21];
	int j = 0;

	printf("Digite a palavra : \n");
	scanf("%s", palavra);

	for(int i = strlen(palavra)-1; i >= 0; i--){
		invertida[j] = palavra[i];
		j++;
		
	}


	if (!strcmp(palavra,invertida)){
		printf("A palavra eh palindroma!\n");
	} else {
		printf ("A palavra nao eh palindroma\n");
	}

	return 0;
}
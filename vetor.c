#include <stdio.h>
#include <string.h>

#define T 10000
int vetor[T];

int main()  
{
	int maior, N, i;
	printf("Qtd de numeros: ");

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &vetor[i]);
	}

	maior = vetor[0];

	for(i = 1; i < N; i++)
	{
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
	}

	printf("O maior numero eh: '%d'", maior);
	return 0;
}
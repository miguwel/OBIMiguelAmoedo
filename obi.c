#include <stdio.h>
#include <string.h>

#define MAXX 1000

int main(){

	double d;
	scanf("%lf", &d);

	int n;
	scanf("%d", &n);

	char c;
	scanf("%c", &c);

	//char v[1000];

	//int n[MAXX];

	printf("%.3lf\n", d);

	char palavra[100];
	scanf("%s", palavra);

	int n[N];
	int i
	for(i = 0; i < N; i++)
		scanf("%d", &n[i]);
	
	////////////////////////////////////////////////////////////////

	int matriz[MAXX][100];

	int M, N;
	scanf("%d%d", &M, &N);

	int i, j;

	for (i = 0; i < M; ++i)
	{
		for (j = 0; j < N; ++j)
		{	
			scanf("%d", &matriz[i][j]);
		}
	}

	for (i = 0; i < M; ++i)
	{
		for (j = 0; j < N; ++j)
		{	
			printf("%d", matriz[i][j]);
		}
	}

	
	////////////////////////////////////////////////////////////////

	return 0;
}
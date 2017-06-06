#include <stdio.h>

#define X 501
int main (){
	
	int N, l, c, Caiu = 0;
	scanf("%d", &N);
	int m [X][X];

	int i, j;

	for (i =0; i < X; i++)
	{
		for (j = 0; j < X; j++)
		{
			m[i][j] = 0;
		}
	}

	for (i = 0; i < N; i++)
	{
		scanf("%d%d",&l, &c);
		if (m[l][c] != 1)
			m[l][c] = 1;

		else 
		{
			Caiu = 1;
			break;
		}
	}

	printf("%d", Caiu);

	return 0;
}
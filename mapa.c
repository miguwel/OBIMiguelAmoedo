#include <stdio.h>
#include <string.h>

int main(){

	int C, L, i, j, c1, l1;
	char Mapa[100][100];
	scanf("%d%d", &L, &C);

	for(i = 0; i <= L; i++)
	{
		for (j = 0; j <= C; j++)
		{
			scanf("%c", &Mapa[i][j]);

			if(Mapa[i][j] == 'o' || Mapa[i][j] == 'O')
			{
				l1 = i;
				c1 = j;
			}
		}
	}

	int andei = 1;
	while(andei != 0)
	{
		andei = 0;

		if((Mapa[l1-1][c1] == 'H' || Mapa[l1-1][c1] == 'h') && l1>0)
		{
			andei = 1;
			l1 = l1 - 1;
		}

		else if((Mapa[l1+1][c1] == 'H' || Mapa[l1+1][c1] == 'h') && l1<L)
		{
			andei = 1;
			l1 = l1 + 1;
		}

		else if((Mapa[l1][c1-1] == 'H' || Mapa[l1][c1-1] == 'h') && c1>0)
		{
			andei = 1;
			c1 = c1 - 1;
		}
		else if((Mapa[l1][c1+1] == 'H' || Mapa[l1][c1+1] == 'h') && c1<C)
		{
			andei = 1;
			c1 = c1 + 1;
		}
	}

	printf("%d %d\n", c1, l1);

	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

	int C, L, i, j, c1, l1;
	char Mapa[102][102];
	scanf("%d %d", &L, &C);

	for(i = 1; i <= L; i++)
	{
		scanf("%*c");
		for (j = 1; j <= C; j++)
		{
			scanf("%c", &Mapa[i][j]);
			if(Mapa[i][j] == 'o')
			{
				l1 = i;
				c1 = j;
			}
		}
	}

	int achei = 0;
	while(achei == 0)
	{
		Mapa[l1][c1] = '.';
		if(l1 != 1 && Mapa[l1-1][c1] == 'H')
			l1--;

		else if(l1 != L && Mapa[l1+1][c1] == 'H' )
			l1++;

		else if(c1 != 1 && Mapa[l1][c1-1] == 'H')
			c1--;

		else if(c1 != C && Mapa[l1][c1+1] == 'H')
			c1++;

		else
			achei = 1;
	}

	printf("%d %d\n", l1, c1);
s
	return 0;
}
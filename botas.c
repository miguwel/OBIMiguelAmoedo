#include  <stdio.h>
 int main (void)
	{

		int n, i;

		scanf("%d", &n);
		int dir [61];
		int esq [61];
		int m, par;
		par = 0;
		char l;
		
		for (i = 0; i < 61; ++i)
		{
			dir[i] = 0;
			esq[i] = 0;
		}

		for (i = 0; i < n; i++)
		{
			scanf("%d%*c%c",&m, &l);

			if(l == 'd' || l == 'D')
				dir[m]++;

			else if(l == 'e' || l == 'E')
				esq[m]++;	
		}

		for (i = 30; i < 61; i++)
		{
			if (dir[i] <= esq[i])
				par = par + dir[i];

			else 
				par = par + esq[i];
		}

		printf("%d\n", par);

		return 0;
}

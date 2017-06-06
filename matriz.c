#include <stdio.h>
#include <string.h>

#define X 501
int main (){
	
	int N, l, c, Caiu = 0;
	scanf("%d", &N);
	int m [X][X];

	int i;
	
	memset(m, 0, sizeof(m));

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
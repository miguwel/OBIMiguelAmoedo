#include <stdio.h>
#include <string.h>

int main() {

	int N, R, V, i, resto;

	scanf("%d", &N);
	int mdc[N];

	for(i = 0; i < N; i++)
	{
		scanf("%d%d", &R, &V);

		resto=R%V;
        while(resto!=0)
        {
	        R = V;
	        V = resto;
	        resto = R%V;         
        }

        mdc[i]=V;
	}

	for(i = 0; i < N; i++)
	{
		printf("%d\n", mdc[i]);
	}
 
    return 0;
}
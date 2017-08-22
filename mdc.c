#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
int main (){
=======
int main() {
>>>>>>> 0136f025d114f43a8af938d3bc0c5ee62b454be5

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
<<<<<<< HEAD
	return 0;
=======
 
    return 0;
>>>>>>> 0136f025d114f43a8af938d3bc0c5ee62b454be5
}
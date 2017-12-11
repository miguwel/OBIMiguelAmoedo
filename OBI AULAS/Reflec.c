#include <stdio.h>
#include <string.h>

void reflec(int x)
{
	if(x == 0)
	{
		printf(" %d", x);
		return;
	}

	printf(" %d", x);
	reflec(x-1);
	printf(" %d", x);
	
}

int main()
{
	int n;
	scanf("%d", &n);
	reflec(n);
	return 0;
}
#include <stdio.h>
#include <string.h>

int rec(int x)
{
	printf("%d\n", x);
	if(x == 0)
		return 0;

	return rec(x-1);
}

int main()
{
	int n;
	scanf("%d", &n);
	rec(n);
	return 0;
}
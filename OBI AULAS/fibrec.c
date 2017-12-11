#include <stdio.h>
#include <string.h>

int fib(int x)
{
	if(x == 1 || x == 2)
		return 1;

	return fib(x-1) + fib(x-2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}
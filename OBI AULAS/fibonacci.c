#include <stdio.h>
#include <string.h>

int main()
{
	int fib[1000];
	fib[1] = 1;
	fib[2] = 1;
	scanf("%d", &n);
	for(i = 3; i < n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	printf("%d\n", fib[n]);
	return 0;
}
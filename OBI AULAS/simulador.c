#include <stdio.h>
#include <string.h>

#define V 1000
int val[V];

int soma(int X, int Y){
	int s = 0;
	int i = X;
	while(i <= Y)
	{
		s = s + val[i];
	}
	return s;
}

void inverter(int X, int Y){
	int x, y;
	int i = 0;
	while(X+i <= Y-i)
	{
		x = val[X+i];
		y = val[Y-i];
		val[X+i] = y;
		val[Y-i] = x;
	}
}

int main(){
	char op;
	int i, Npos, Nop, X, Y;
	scanf("%d%d\n", &Npos, &Nop);
	printf("%d %d\n", Npos, Nop);
	for(i = 1; i <= Npos; i++)
	{
		val[i] = i;
	}
	scanf("%c%d%d", &op, &X, &Y);
	printf("%c %d %d\n", op, X, Y);

	/*for(i = 0; i < Nop; i++)
	{
		

		if(op == 'S')
			printf("%d\n", soma(X,Y));

		else if(op == 'I')
			inverter(X,Y);

		else
			printf("Operacao Invalida\n");
	}*/

	return 0;
}
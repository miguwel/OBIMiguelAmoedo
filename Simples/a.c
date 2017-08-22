#include <stdio.h>
#include <string.h>

int main() {

	char nome[100];
	double salario, vendas, final;

	scanf("%s", nome);

	scanf("%lf", &salario);
	scanf("%lf", &vendas);

	final = (vendas / 100) * 15 + salario;

	printf("TOTAL = R$ %.2lf\n", final);
}
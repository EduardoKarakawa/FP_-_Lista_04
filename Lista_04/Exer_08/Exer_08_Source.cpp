#include <stdio.h>
#include <stdlib.h>

int main() {
	int depend;
	float salario, deducao, imposto; 
	printf_s("Digite seu salario R$:");
	scanf_s("%f", &salario);
	printf("Digite a quantidade de dependentes:");
	scanf_s("%d", &depend);
	imposto = 0.0f;
	deducao = depend * 150.69f;
	salario = salario - deducao;
	if (salario <= 1499.15f) {
		printf("\nTotal de Deducao: R$%.2f\nBase de Caldulo: R$%.2f\nImposto: R$%.2f\n",deducao, salario,imposto);
	}
	else {
		if (salario >= 1499.16f){
			if ((salario - 1499.16f) > 2246.75f - 1499.16f) {
				imposto = imposto + (2246.75f - 1499.16f)*0.075f;
			}
			else {
				imposto = imposto + (salario - 1499.16f)*0.075f;
			}
		}

		if ((salario - 2246.76f) >  2995.70f - 2246.76f) {
			imposto = imposto + (2995.70f - 2246.76f)*0.15f;
		}
		else {
			imposto = imposto + (salario - 2246.76f)*0.15f;
		}

		if (salario >= 2995.71f) {
			if ((salario - 2995.71f) >  3743.19f - 2995.71f) {
				imposto = imposto + (3743.19f - 2995.71f)*0.225;
			}
			else {
				imposto = imposto + (salario - 2995.71f)*0.225f;
			}
		}
		if (salario >= 3743.20f) {
			imposto = imposto + (salario - 3743.20f)*0.275f;
		}
	}
	printf("\nTotal de Deducao: R$%.2f\nBase de Caldulo: R$%.2f\nImposto: R$%.2f\n", deducao, salario, imposto);
	system("pause");
	return 0;
}
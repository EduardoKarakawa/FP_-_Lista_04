#include <stdio.h>
#include <stdlib.h>

int main() {
	float m, h, imc;
	printf("Digite seu peso em Kg:");
	scanf_s("%f", &m);
	printf("Digite sua altura em metros:");
	scanf_s("%f", &h);
	imc = m / (h*h);
	if (imc < 18.5) {
		printf("IMC = %.2f\nVc esta abaixo do peso.\n", imc);
	}
	else {
		if (imc >= 18.5 && imc <= 25.0) {
			printf("IMC = %.2f\nVc esta com o peso normal.\n", imc);
		}
		else {
			if (imc > 25.0 && imc <= 30.0) {
				printf("IMC = %.2f\nVc esta acima do peso.\n", imc);
			}
			else {
				if (imc > 30.0) {
					printf("IMC = %.2f\nVc esta obeso.\n", imc);
				}
			}
		}
	}
	system("pause");
	return 0;
}
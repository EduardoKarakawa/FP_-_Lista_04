#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;
	printf("Digite sua idade:");
	scanf_s("%d", &idade);
	if (idade < 16) {
		printf("Voce ainda nao pode votar.\n");
	}
	if ((idade >= 16 && idade<18) || idade > 65) {
		printf("Voce pode votar, mas eh opcional.\n");
	}
	if (idade >= 18 && idade <= 65) {
		printf("Seu voto eh obrigatorio.\n");
	}
	system("pause");
	return 0;
}
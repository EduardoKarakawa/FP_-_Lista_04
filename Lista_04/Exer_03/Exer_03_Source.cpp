#include <stdio.h>
#include <stdlib.h>

int main() {
	int idad;
	printf("Digite sua idade:");
	scanf_s("%d", &idad);
	if (idad < 5) {
		printf("Nao possui categoria.\n");
	}
	else {
		if (idad >= 5 && idad <= 7) {
			printf("Cateforia 5 ate 7 anos: Infantil A.\n");
		}
		else {
			if (idad >= 8 && idad <= 10) {
				printf("Categoria 8 ate 10 anos: Infantil B.\n");
			}
			else {
				if (idad >= 11 && idad <= 13) {
					printf("Categoria 11 ate 13 anos: Juvenil A.\n");
				}
				else {
					if (idad >= 14 && idad <= 17) {
						printf("Categoria 14 ate 17 anos: Juvenil B.\n");
					}
					else {
						if (idad >= 18) {
							printf("Categoria Maior de 18: Adulto.\n");
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
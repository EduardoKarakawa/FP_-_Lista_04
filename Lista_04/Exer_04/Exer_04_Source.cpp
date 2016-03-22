#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, x, ehtri=0;
	printf("Digite as medidas dos lados do triangulo:");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a < (b+c)) && a>abs(b - c)) {
		ehtri++;
	}
	if ((b < a + c) && b>abs(a-c)) {
		ehtri++;
	}
	if ((c < b + a) && c>abs(b-a)) {
		ehtri++;
	}
	if (ehtri < 3) {
		printf("Os valores digitados nao pertencem a um triangulo.\n");
	}
	else {
		if ((a + b) - (b + c) == 0) {
			printf("Os valores sao de um triangulo equilatero.\n");
		}
		else {
			if (((a == b) && (a != c)) || ((c == b) && (b != a))) {
				printf("Os valores sao de um triangulo isoscele.\n");
			}
			else {
				if ((a != b) && (c != b) && (c != a)) {
					printf("Os valores sao de um triangulo escaleno.\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}
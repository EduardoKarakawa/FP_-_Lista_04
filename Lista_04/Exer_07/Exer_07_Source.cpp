#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, aux;
	bool trocou;
	printf("Digite tres numeros inteiros:");
	scanf_s("%d %d %d", &a, &b, &c);
	trocou = true;
	while (trocou) {
		trocou = false;
		if (a > b) {
			aux = a;
			a = b;
			b = aux;
			trocou = true;
		}
		if (b > c) {
			aux = b;
			b = c;
			c = aux;
			trocou = true;
		}
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}
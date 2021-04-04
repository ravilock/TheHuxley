#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca(int* a, int* b) {
    int aux = *b;
    *b = *a;
    *a = aux;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a: %d b: %d\n", a, b);
    troca(&a, &b);
    printf("a: %d b: %d\n", a, b);
	return 0;
}
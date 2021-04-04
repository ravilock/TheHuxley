#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int x, int y) {
    if (x < y) {
        return x;
    }
    return y;
}

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

int main() {
    int maior, menor, x;
    for (int c = 0; c < 100; c++) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        if (c == 0) {
            maior = x;
            menor = x;
        }
        else {
            maior = max(maior, x);
            menor = min(menor, x);
        }
    }
    printf("%d %d", menor, maior);
	return 0;
}
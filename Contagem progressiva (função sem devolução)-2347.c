#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void contagem(int n) {
    int k, j;
    for (k = 1; k <= n; k++) {
        for (j = 1; j <= k; j++) {
            if (j == 1) {
                printf("%d", k);
            }
            else {
                printf("-%d", k);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    contagem(n);
	return 0;
}
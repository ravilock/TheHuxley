#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo_check(int n) {
    int j, c = 0;
    for (j = 1; j <= n; j++) {
        if (n % j == 0) {
            c++;
        }
    }
    return c;
}

int main() {
    int n, c = 0, maior, flag = 0;
    scanf("%d", &n);
    while (n != 404) {
        if (primo_check(n) == 2) {
            if (c == 0) {
                maior = n;
                flag = 1;
            }
            else {
                if (n > maior) {
                    maior = n;
                    flag = 1;
                }
            }
        }
        scanf("%d", &n);
        c++;
    }
    if (flag == 0) {
        printf("SEM PRIMOS");
    }
    else {
        printf("%d", maior);
    }
	return 0;
}
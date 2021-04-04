#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib_anterior(int n) {
    int a, b, soma;
    a = 0;
    b = 1;
    while (a + b <= n) {
        soma = a + b;
        a = b;
        b = soma;
    }
    return soma;
}

int check_primo(int n) {
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int primo_anterior(int n) {
    for (int i = n; i > 1; i--) {
        if (check_primo(i) == 1) {
            return i;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", primo_anterior(fib_anterior(n)));
	return 0;
}
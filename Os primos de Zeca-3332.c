#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primos_vizinhos(int n, int x) {
    if (x == -1) {
        for (int i = n - 2; i > 1; i -= 2) {
            if (check_primo(i)) {
                return i;
            }
        }
    }
    if (x == 1) {
        for (int i = n + 2; i > 1; i += 2) {
            if (check_primo(i)) {
                return i;
            }
        }
    }
}

int check_primo_zeca(int n) {
    int n_p1 = primos_vizinhos(n, 1), n_n1 = primos_vizinhos(n, -1);
    if ((n_p1 + n_n1)/2 == n) {
        return 1;
    }
    else {
        return 0;
    }
}

int check_primo(int n) {
    if (n == 2) {
        return 1;
    }
    else if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int li, lf, q = 0;
    scanf("%d %d", &li, &lf);
    for (int i = li; i <= lf; i++) {
        if (i >= 5) {
            if (check_primo(i)) {
                if (check_primo_zeca(i)) {
                    q++;
                }
            }
        }
    }
    printf("%d", q);
	return 0;
}
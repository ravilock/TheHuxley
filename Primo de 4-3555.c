#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n, copia_n, divisor, divizoes;
    
    while (1) {
        scanf("%lld", &n);
        if (n == -1) {
            return 0;
        }
        copia_n = n;
        divizoes = 0;
        while (1) {
            if (n%2 == 0) {
                n/=2;
                divizoes++;
            }
            else {
                break;
            }
        }
        for (divisor = 3; (divisor*divisor <= copia_n) && (divizoes <= 4); divisor+=2) {
            while(n%divisor == 0) {
                n /= divisor;
                divizoes++;
            }
        }
        if (n > 1) {
            divizoes++;
        }
        if(divizoes == 4) {
            printf("%lld eh um primo de 4\n", copia_n);
        }
        else {
            printf("%lld, eu nunca duvidei\n", copia_n);
        }
    }
}
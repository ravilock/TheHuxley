#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int AMPM(int hora) {
    if (0 <= hora && hora <= 11) {
        return 1; // 1 Significa AM
    }
    return 0; // 0 Significa PM
}

void exibir(int hora, int minuto) {
    if (1 <= hora && hora <= 9) {
        if (0 <= minuto && minuto <= 9) {
            printf("0%d\n0%d\n", hora, minuto);
        }
        else {
            printf("0%d\n%d\n", hora, minuto);
        }
    }
    else {
        if (0 <= minuto && minuto <= 9) {
            printf("%d\n0%d\n", hora, minuto);
        }
        else {
            printf("%d\n%d\n", hora, minuto);
        }
    }
}

void converter(int hora, int minuto) {
    if (AMPM(hora)) {
        if (hora == 0) {
            hora = 12;
        }
        exibir(hora, minuto);
        printf("am");
    }
    else {
        if (13 <= hora && hora <= 23) {
            hora -= 12;
        }
        exibir(hora, minuto);
        printf("pm");
    }
}

int main() {
    int hora, minuto, flag;
    scanf("%2d", &hora);
    scanf("%2d", &minuto);
    converter(hora, minuto);
	return 0;
}
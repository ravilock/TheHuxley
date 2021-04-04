#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int bissexto_check(int ano) {
    if ((ano%4 == 0) && !(ano%100 == 0 && ano%400 != 0)) {
        return 1;
    }
    return 0;
}

int check_ano(int ano) {
    if (1900 <= ano && ano <= 2100) {
        return 1;
    }
    return 0;
}

int check_mes(int mes) {
    if (1 <= mes && mes <= 12) {
        return 1;
    }
    return 0;
}

int dia_mes(int mes, int ano) {
    if (mes == 11 || mes == 9 || mes == 6 || mes == 4) {
        return 30;
    }
    else if (mes == 2) {
        if (bissexto_check(ano)) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else {
        return 31;
    }
}

int check_dia(int dia, int mes, int ano) {
    if (1 <= dia && dia <= 31) {
        if (1 <= dia && dia <= 28) {
            return 1;
        }
        else if (dia == dia_mes(mes, ano)) {
            return 1;
        }
    }
    return 0;
}

void data_check(int dia, int mes, int ano) {
    if (check_dia(dia, mes, ano) && check_mes(mes) && check_ano(ano)) {
        printf("valida");
    }
    else {
        printf("invalida");
    }
}

int main() {
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    data_check(dia, mes, ano);
	return 0;
}
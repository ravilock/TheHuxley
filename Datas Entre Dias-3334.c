#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1;
    }
    return 0;
}

int checkMes(int mes, int ano) {
    if (mes == 2) {
        if (checkBissexto(ano) == 0) {
            return 0;
        }
        return 1;
    }
    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) {
        return 2;
    }
    return 3;
}

int diasEntreDatas(int d1, int m1, int a1, int d2, int m2, int a2) {
    int total = 0;
    if ((d1 == d2) && (m1 == m2) && (a1 == a2)) {
        return 0;
    }
    else {
        while((d1 != d2) || (m1 != m2) || (a1 != a2)) {
            total++;
            d1++;
            if ((d1 == 29) && (checkMes(m1, a1) == 0)) {
                d1 = 1;
                m1++;
            }
            else if ((d1 == 30) && (checkMes(m1, a1) == 1)) {
                d1 = 1;
                m1++;
            }
            else if ((d1 == 31) && (checkMes(m1, a1) == 2)) {
                d1 = 1;
                m1++;
            }
            else if ((d1 == 32) && (checkMes(m1, a1) == 3)) {
                d1 = 1;
                m1++;
                if (m1 == 13) {
                    m1 = 1;
                    a1++;
                }
            }
        }
    }
    return total;
}

void dataEntreDias(int d1, int m1, int a1, int total) {
    int metade = total / 2;
    for (metade; metade > 0; metade --) {
        d1++;
        if ((d1 == 29) && (checkMes(m1, a1) == 0)) {
            d1 = 1;
            m1++;
        }
        else if ((d1 == 30) && (checkMes(m1, a1) == 1)) {
            d1 = 1;
            m1++;
        }
        else if ((d1 == 31) && (checkMes(m1, a1) == 2)) {
            d1 = 1;
            m1++;
        }
        else if ((d1 == 32) && (checkMes(m1, a1) == 3)) {
            d1 = 1;
            m1++;
            if (m1 == 13) {
                m1 = 1;
                a1++;
            }
        }
    }
    if (total % 2 == 0) {
        exibeDia(d1, m1, a1);
        printf(" 00:00");
    }
    else {
        exibeDia(d1, m1, a1);
        printf(" 12:00");
    }
}

void exibeDia(int d, int m, int a) {
    if (d <= 9) {
        if (m <= 9) {
            printf("0%d/0%00d/%d", d, m, a);
        }
        else {
            printf("0%d/%d/%d", d, m, a);
        }
    }
    else {
        if (m <= 9) {
            printf("%d/0%d/%d", d, m, a);
        }
        else {
            printf("%d/%d/%d", d, m, a);
        }
    }
}

int main() {
    int d1, d2, m1, m2, a1, a2, total;
    scanf("%d/%d/%d", &d1, &m1, &a1);
    scanf("%d/%d/%d", &d2, &m2, &a2);
    total = diasEntreDatas(d1, m1, a1, d2, m2, a2);
    dataEntreDias(d1, m1, a1, total);
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI M_PI

double EQ1(int n) {
    int c; double sum;
    sum = 0;
    for (c = 0; c < n; c++) {
        sum += (pow((-1), c)) / ((2*c) + 1);
    }
    sum *= 4;
    return sum;
}

double EQ2(int n) {
    int c; double sum;
    sum = 0;
    for (c = 0; c < n; c++) {
        sum += 2.0 / (((4 *c) + 1) * ((4 * c) + 3));
    }
    sum *= 4;
    return sum;
}

double EQ3(int n) {
    int c, c2; double sum;
    sum = 3;
    c2 = 0;
    for (c = 2; c < (2*n); c += 2) {
        if (c2%2 == 0) {
            sum += 4.0 / (c * (c + 1) * (c + 2));
        }
        else {
            sum -= 4.0 / (c * (c + 1) * (c + 2));
        }
        c2++;
    }
    return sum;
}

int main() {
    int n; double PI1, PI2, PI3;
    scanf("%d", &n);
    PI1 = EQ1(n);
    PI2 = EQ2(n);
    PI3 = EQ3(n);
    printf("%lf - %lf\n", PI1, PI1 / PI);
    printf("%lf - %lf\n", PI2, PI2 / PI);
    printf("%lf - %lf\n", PI3, PI3 / PI);
	return 0;
}
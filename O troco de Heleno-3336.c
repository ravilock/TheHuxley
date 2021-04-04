#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p, n1, n5, n10, tot = 0;
    while (1) {
        n1 = 0;
        n5 = 0;
        n10 = 0;
        tot = 0;
        scanf("%d", &p);
        if (p == 0) {
            break;
        }
        if (p >= 10) {
            n10 = p/10;
            p -= n10*10;
            tot += n10;
        }
        if ((p >= 5) && (p <= 9)) {
            n5 = 1;
            p -= n5*5;
            tot += n5;
        }
        if ((0 < p) && (p < 5)) {
            n1 = p;
            tot += n1;
            p -= n1;
        }
        printf("%d\n", tot);
        printf("%d %d %d\n", n1, n5, n10);
    }
	return 0;
}
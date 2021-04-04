#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digit_counter(int n, int f) {
    if ((n == 0) && (f == 0)) {
        return 1;
    }
    else if ((n == 0) && (f == 1)) {
        return 0;
    }
    else {
        return 1 + digit_counter(n/10, 1);
    }
}

int main() {
    int n, x;
    scanf("%d", &x);
    n = digit_counter(x, 0);
    printf("%d", n);
	return 0;
}
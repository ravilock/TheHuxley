#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 0, N, P, f1, f2, cont = 0;
    scanf(" %d %d", &N, &P);
    for (i = 0; i < N; i++){
        scanf(" %d", &f1);
        scanf(" %d", &f2);
        if ((f1 + f2 >= P) && (f1 != 0) && (f2 != 0)){
            cont += 1;
        }
    }
    printf("%d", cont);
	return 0;
}
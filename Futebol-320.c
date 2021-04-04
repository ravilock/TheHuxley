#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int difference(int* pointer, int i, int n) {
    int diff, v1, v2;
    for (int c = 0; c < i; c++) {
        for (int c2 = 0; c2 < 2; c2++) {
           pointer++;
        }
    }
    v1 = *pointer;
    pointer++;
    v2 = *pointer;
    diff = v1 - v2;
    return diff;
}

void fill(int* pointer, int N) {
    for (int c = 0; c < N; c++) {
        for (int c2 = 0; c2 < 2; c2++) {
            scanf("%d", pointer);
            pointer++;
        }
    }
}

void show(int* pointer, int N) {
        for (int c = 0; c < N; c++) {
            for (int c2 = 0; c2 < 2; c2++) {
                if (c2 == 0) {
                    printf("%d", *pointer);
                }
                else {
                    printf(" %d", *pointer);
                }
                pointer++;
            }
        printf("\n");
    }
}

int points(int* pointer, int N) {
    int point = 0, diff;
    for (int c = 0; c < N; c++) {
        diff = difference(pointer, c, N);
        if (diff == 0) {
            point++;
        }
        else if (diff >= 1) {
            point += 3;
        }
    }
    return point;
}

void buy_one_goal(int* pointer, int i, int N, int* G) {
    for (int c = 0; c < i; c++) {
        for (int c2 = 0; c2 < 2; c2++) {
            pointer++;
        }
    }
    *pointer += 1;
    *G -= 1;
}

void buy(int* pointer, int N, int* G) {
    int diff, aimed = 0;
    while (*G > 0) {
       for (int c2 = 0; c2 < N; c2++) {
           diff = difference(pointer, c2, N);
           if (diff == aimed) {
               for (int c3 = 0; c3 < (1-aimed); c3++) {
                   buy_one_goal(pointer, c2, N, G);
                   if (*G == 0) {
                       return 0;
                   }
               }
           }
       }
       aimed--;
        if (*G == 0) {
            return 0;
        }
    }
}

int main() {
    int N, G, point;
    scanf("%d", &N);
    scanf("%d", &G);
    int placares[N][2];
    int* pointer = &placares;
    fill(pointer, N);
    //show(pointer, N);
    buy(pointer, N, &G);
    //show(pointer, N);
    point = points(pointer, N);
    printf("%d", point);
	return 0;
}
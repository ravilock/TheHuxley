#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *str = NULL, letter2;
    int ch, reps[256] = {0}, letter_int;
    size_t size = 0, len = 0;

    while ((ch=getchar()) != EOF && ch != '\n') {
        if (len + 1 >= size)
        {
            size = size * 2 + 1;
            str = realloc(str, sizeof(char)*size);
        }
        str[len++] = ch;
        letter_int = ch;
        reps[letter_int] += 1;
        
    }
    for (int c = 255; c > 0; c--) {
        if (reps[c] > 0) {
            letter2 = c;
            printf("%c %d\n", letter2, reps[c]);
        }
    }
    return 0;
}
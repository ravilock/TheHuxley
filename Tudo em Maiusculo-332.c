#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string[100];
    scanf("%99[^\n]", string);
    for (int i = 0; i < strlen(string); i++) {
        if ((97 <= string[i]) && (string[i] <= 122)) {
            string[i] -= 32;
        }
    }
    printf("%s", string);
	return 0;
}
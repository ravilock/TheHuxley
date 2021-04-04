#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ToUpper(char text[]) {
    int len = strlen(text);
    for (int c = 0;c < len; c++) {
        if (text[c]>= 97 && text[c]<=122) {
            text[c] -= 32;
        }
    }
}

int main() {
    char Nome[20], NomeMaior[20], NomeMenor[20], flag[20];
    float Idade, IdadeMaior, IdadeMenor;
    int c = 0, FlagMenor, FlagMaior;
    while (1) {
        scanf(" %19[^\n] ", &Nome);
        scanf("%f", &Idade);
        if (c == 0) {
            IdadeMaior = Idade;
            IdadeMenor = Idade;
            strcpy(NomeMaior, Nome);
            strcpy(NomeMenor, Nome);
        }
        else {
            if (Idade < IdadeMenor) {
                IdadeMenor = Idade;
                strcpy(NomeMenor, Nome);
            }
            if (Idade > IdadeMaior) {
                IdadeMaior = Idade;
                strcpy(NomeMaior, Nome);
            }
        }
        c++;
        Nome[0] = '\0';
        scanf(" %19[^\n] ", &flag);
        if (strcmp(flag, "FIM") == 0 || strcmp(flag, "fim") == 0) {
            break;
        }
    }
    ToUpper(NomeMenor);
    ToUpper(NomeMaior);
    printf("%s\n", NomeMenor);
    printf("%s", NomeMaior);
	return 0;
}
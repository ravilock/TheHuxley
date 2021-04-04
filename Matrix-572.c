#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int R1, R2, R3, R4, R5, total;
    scanf("%d", &R1);
    scanf("%d", &R2);
    scanf("%d", &R3);
    scanf("%d", &R4);
    scanf("%d", &R5);
    total = (!R1)*2 + R2 + R3 + R4 + R5*3;
    if (total >= 5) {
        printf("A Matrix esta em todo lugar. A nossa volta. E o mundo colocado diante de seus olhos, para que nao veja a verdade. Infelizmente e impossivel dizer o que e a Matrix. Voce tem de ver por si mesmo. *Voce e sugado pelo telefone e revelado a verdade"); 
    }
    else {
        printf("Voce precisa entender que a maioria dessas pessoas nao estao prontas para acordar. E muitos estao tao inertes, tao dependentes do sistema que vao lutar para protege-lo");
    }
	return 0;
}
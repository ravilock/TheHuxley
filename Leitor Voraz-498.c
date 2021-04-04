#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int livro, maximo_diario = 0, total_semanal = 0, onde_parou = 0, lidas_dia, pagina_atual;
    scanf("%d", &livro);
    for (int c = 1; c <= 7; c++) {
        scanf("%d", &pagina_atual);
        lidas_dia = pagina_atual - onde_parou;
        if (lidas_dia >= maximo_diario) {
            maximo_diario = lidas_dia;
        }
        onde_parou = pagina_atual;
    }
    printf("%d\n", pagina_atual);
    printf("%d", maximo_diario);
	return 0;
}
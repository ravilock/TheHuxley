#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[51];
    float nota;
} dados;

void swap(dados* pointer,int i1,int i2, int n) {
    dados aux;
    dados* parai1 = pointer;
    dados* parai2 = pointer;
    for (int c = 0; c < i1; c++) {
        parai1++;
    }
    for (int c = 0; c < i2; c++) {
        parai2++;
    }
    aux.matricula = parai1->matricula;
        for (int c2 = 0; c2 < 51; c2++) {
            aux.nome[c2] = parai1->nome[c2];
        }
    aux.nota = parai1->nota;
    parai1->matricula = parai2->matricula;
    for (int c2 = 0; c2 < 51; c2++) {
        parai1->nome[c2] = parai2->nome[c2];
    }
    parai1->nota = parai2->nota;
    parai2->matricula = aux.matricula;
    for (int c2 = 0; c2 < 51; c2++) {
        parai2->nome[c2] = aux.nome[c2];
    }
    parai2->nota = aux.nota;
}



void show(dados* pointer, int n, float media) {
    for (int c = 0; c < n; c++) {
        if (pointer->nota >= media) {
            printf("Matricula: %d", pointer->matricula);
            printf(" Nome: %s", pointer->nome);
            printf(" Nota: %.1f\n", pointer->nota);
        }
        pointer++;
    }
}

float grade_in_index(dados* pointer, int n, int index) {
    float nota;
    for (int c = 0; c < index; c++) {
        pointer++;
    }
    nota = pointer->nota;
    return nota;
}

int code_in_index(dados* pointer, int n, int index) {
    int code;
    for (int c = 0; c < index; c++) {
        pointer++;
    }
    code = pointer->matricula;
    return code;
}

void bubble_sort(dados* pointer, int n) {
    int k, j;
    float notak, notaj;
    int matriculak, matriculaj;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n-1; j++) {
                notaj = grade_in_index(pointer, n, j);
                notak = grade_in_index(pointer, n, k);
                if (notaj > notak) {
                    swap(pointer, j, k, n);
                }
                if (notaj == notak) {
                    matriculaj = code_in_index(pointer, n, j);
                    matriculak = code_in_index(pointer, n, k);
                    if (matriculaj > matriculak) {
                        swap(pointer, j, k, n);
                    }
                }
        }
    }
  }

int main() {
    int n, menor, menor_indice, atual;
    float media = 0;
    scanf("%d", &n);
    dados alunos[n];
    dados* pointer = &alunos;
    int ordem[n];
    for (int c = 0; c < n; c++) {
        scanf("%d", &alunos[c].matricula);
        scanf(" %[^\n] ", alunos[c].nome);
        scanf("%f", &alunos[c].nota);
        media += alunos[c].nota;
    }
    media /= n;
    bubble_sort(pointer, n);
    show(pointer, n, media);
    printf("Media = %.2f", media);
	return 0;
}
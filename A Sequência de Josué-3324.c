#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main () { 
    char a, b, c;
    int vogal_a, vogal_b, vogal_c, nao_vogal, consoante;
    int aux;

    scanf("%c %c %c", &a, &b, &c);

    vogal_a = (!(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'));
    vogal_b = (!(b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U'));
    vogal_c = (!(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'));
    nao_vogal = (vogal_a && vogal_b && vogal_c);
    consoante = ((a >= 'A' && a <= 'Z') && (b >= 'A' && b <= 'Z') && (c >= 'A' && c <= 'Z') && nao_vogal);

    if (a > b){ 
        aux = a; 
        a = b; 
        b = aux; 
    }

    if (c < a){
        aux = a;
         a = c;
        c = aux;
    } else if (c > a) {
        aux = b;
        b = c;
        c = aux;
    }  

    if ( b > c){
        aux = b;
        b = c; 
        c = aux;  
    }   
    

    if (!((a >= 'A' && a <= 'Z') || (b >= 'A' && b <= 'Z') || (c >= 'A' && c <= 'Z'))){
        printf("Etiquetas erradas!\n");
    }
    
    else if (a + 1 == b && b + 1 == c){ 
        if (consoante == 1) {
            printf("Sequ�ncia perfeita.\n");
        } else {
            printf("Sequ�ncia quase perfeita.\n");
        }
    } 

    else if (a + 2 == b && b + 2 == c){
        if(consoante == 1){
            printf("Bissequ�ncia perfeita.\n");
        } else {
            printf("Bissequ�ncia quase perfeita.\n");
        }
    }

    else if (a + 3 == b && b + 3 == c){
        if (consoante == 1){
            printf("Trissequ�ncia perfeita.\n");
        } else {
            printf ("Trissequ�ncia quase perfeita.\n");
        }
    }

    else {
        printf("S� umas letras ai...\n");
    }

    return 0;
}
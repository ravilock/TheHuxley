#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[105];
    int i, aux=0;
    scanf(" %104[^\n]s", s);
    for(i=0; s[i]!='\0'; i++){s[i] = tolower(s[i]);}
    for(i=0; s[i+4]!='\0'; i++){
        if((s[i]=='z')&&(s[(i+1)]=='e')&&(s[(i+2)]=='l')&&(s[(i+3)]=='d')&&(s[(i+4)]=='a')){
            aux=1;
        }
    }
    if(aux==1){printf("Link Bolado");}
    else{printf("Link Tranquilo");}
	return 0;
}
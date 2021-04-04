#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[15], i, par[5], impar[5];
    int *pa, *ppar, *pimpar;
    for(i=0; i < 15; i++){
        scanf(" %d", &a[i]);
    }
    ppar = &par[0];
    pimpar = &impar[0];
    for(pa = &a[0]; pa != &a[15]; pa++){
        if(*pa%2==0){
            *ppar = *pa;
            ppar++;
        }else{
            *pimpar = *pa;
            pimpar++;
        }
        
        if(ppar == &par[5]){
            printf("par[0] = %d\npar[1] = %d\npar[2] = %d\npar[3] = %d\npar[4] = %d\n", par[0], par[1], par[2], par[3], par[4]);
            par[0]=0;
            par[1]=0;
            par[2]=0;
            par[3]=0;
            par[4]=0;
            ppar= &par[0];
        }
        if(pimpar == &impar[5]){
            printf("impar[0] = %d\nimpar[1] = %d\nimpar[2] = %d\nimpar[3] = %d\nimpar[4] = %d\n", impar[0], impar[1], impar[2], impar[3], impar[4]);
            impar[0]=0;
            impar[1]=0;
            impar[2]=0;
            impar[3]=0;
            impar[4]=0;
            pimpar=&impar[0];
        }
        if(pa == &a[14]){
            i=0;
            while(impar[i]!=*pimpar){
                printf("impar[%d] = %d\n", i, impar[i]);
                i++;
            }
            i=0;
            while(par[i]!=*ppar){
                printf("par[%d] = %d\n", i, par[i]);
                i++;
            }
            
        }
    }
    
    
	return 0;
}
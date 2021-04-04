#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    float iP[4], iE[4], iK[4], vO, vF,vA, vC, P, E, K;
    for(i=0; i < 4; i++){
       scanf("%f", &iP[i]);
    }
    for(i=0; i < 4; i++){
       scanf("%f", &iE[i]);
    }
    for(i=0; i < 4; i++){
       scanf("%f", &iK[i]);
    }
    scanf("%f", &vO);
    scanf("%f", &vF);
    scanf("%f", &vA);
    scanf("%f", &vC);
    P = (iP[0]*vO)+(iP[1]*vF)+(iP[2]*vA)+(iP[3]*vC);
    E = (iE[0]*vO)+(iE[1]*vF)+(iE[2]*vA)+(iE[3]*vC);
    K = (iK[0]*vO)+(iK[1]*vF)+(iK[2]*vA)+(iK[3]*vC);
    printf("%.2f\n%.2f\n%.2f", P, E, K);
	return 0;
}
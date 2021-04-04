#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int NumEnf1, NumEnf2, NumEnf3; float TreePrice, Total, TotalInd, PreEnf1, PreEnf2, PreEnf3;
    scanf("%f", &TreePrice);
    scanf("%d", &NumEnf1);
    scanf("%f", &PreEnf1);
    scanf("%d", &NumEnf2);
    scanf("%f", &PreEnf2);
    scanf("%d", &NumEnf3);
    scanf("%f", &PreEnf3);
    Total = TreePrice + (NumEnf1 * PreEnf1) + (NumEnf2 * PreEnf2) + (NumEnf3 * PreEnf3);
    TotalInd = Total/21;
    printf("%.2f\n", Total);
    printf("%.2f\n", TotalInd);
	return 0;
}
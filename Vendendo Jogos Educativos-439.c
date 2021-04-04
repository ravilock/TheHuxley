#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int vendas,nvendas;
float salario,valorvendas,bonus;
   scanf("%d",&vendas);
if (vendas>=15){
    valorvendas= vendas * 19.90;
    nvendas= vendas/15;
    bonus= valorvendas * (0.08 * nvendas);
    salario= valorvendas * 0.5;
    salario= salario + bonus;
    printf("%.2lf\n",valorvendas);
    printf("%.2lf\n",bonus);
    printf("%.2lf\n",salario);
}
else{
    valorvendas= vendas * 19.90;
    nvendas= vendas/15;
    bonus= valorvendas * (0.08 * nvendas);
    salario= vendas * 19.90 ;
    salario= salario * 0.5;
    printf("%.2lf\n",valorvendas);
    printf("%.2lf\n",bonus);
    printf("%.2lf\n",salario);
}
	return 0;
}

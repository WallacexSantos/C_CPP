#include <stdio.h>

int main()
{
   char nome[99];
   double salario,vendas;
   
   scanf("%s", nome);
   scanf("%lf",&salario);
   scanf("%lf",&vendas);
   vendas = vendas*0.15;
   salario=salario+vendas;
   printf("TOTAL = R$ %.2lf\n",salario);

    return 0;
}

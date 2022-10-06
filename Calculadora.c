#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,v;
    char op;

    printf("\nDigite o primeiro valor: ",n1);
    scanf("%f",&n1);

    printf("\nDigite o segundo valor: ",n2);
    scanf("%f",&n2);

    printf("\nSoma: +"
    "\nSubtracao: -"
    "\nMultiplicacao: *"
    "\nDivisao: /\n");

    scanf("%s",&op);

    if (op == '+')
    {
        v = n1+n2;
        printf("Seu valor e: %.2f",v);
    }
    else if (op == '-')
    {
        v = n1-n2;
        printf("Seu valor e: %.2f",v);
    }
   else if (op == '*')
   {
       v = n1*n2;
    printf("Seu valor e: %.2f",v);
   }
    else
    {
        v = n1/n2;
        printf("Seu valor e: %.2f",v);
    }

    return 0;

}

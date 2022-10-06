#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Digite um numero: ",n);
   scanf("%d",&n);

   if (n%2 == 0)
   {
    printf("\nP: sim");
    printf("\nI: nao");

   }
   else
   {
    printf("\nP: nao");
    printf("\nI: sim");

   }

return 0;
}

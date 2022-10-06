#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sexo,altura,h,m;
    printf("\nDigite sua altura: ",altura);
    scanf("%f",&altura);

    printf("\nDigite seu sexo: ",sexo);
    scanf("%f",&sexo);

    h = (72.7*altura) - 58;
    m = (62.1*altura) - 44.7;


    printf("\nSeu peso ideal e: %.2f",m,h);

    return 0;

}

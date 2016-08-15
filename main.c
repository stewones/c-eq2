#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,raiz_delta, x1, x2;

    printf("Entre com o valor de A: \n");
    scanf("%f", &a);

    if (a == 0)
    {
        printf("NAO eh uma equacao do 2o grau");
    }
    else
    {
        printf("Entre com o valor de B: \n");
        scanf("%f", &b);
        printf("Entre com o valor de C: \n");
        scanf("%f", &c);

        delta = pow(b,2)-4*a*c;
        printf("Valor de Delta: %.1f \n",delta);

        if (delta < 0)
        {
            printf("NAO ha raiz no conjunto dos numeros REAIS");
        }
        else
        {
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            printf("Valor de x1: %.1f \n",x1);
            printf("Valor de x2: %.1f \n",x2);
        }

    }
    return 0;
}

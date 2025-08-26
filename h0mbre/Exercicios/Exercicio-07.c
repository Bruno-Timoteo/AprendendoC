#include <stdio.h>
#include <math.h>


int main(void)
{
    float A, B, C, delta, x1, x2, resultado_x1, resultado_x2;
    
    
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    printf("Insira o valor de C: ");
    scanf("%f", &C);
    
    delta = B*B - 4*A*C;
    
    x1 = (-B + sqrt(delta))/(2*A);
    x2 = (-B - sqrt(delta))/(2*A);
    
    /* Parte para verificar se iguala a zero. */

    resultado_x1 = ((x1*x1)*A) + (x1*B) + C;
    resultado_x2 = ((x2*x2)*A) + (x2*B) + C;

    if (resultado_x1 == 0)
    {
        printf("\nO valor da solução utilizando '+' é: %f\n", x1);

    }
    else
    {
        printf("\nO valor da solução utilizando '+' é: %f, mas talvez não esteja correto...\n", x1);

    }

    if (resultado_x2 == 0)
    {
        printf("O valor da solução utilizando '-' é: %f\n", x2);

    }
    else
    {
        printf("O valor da solução utilizando '-' é: %f, mas talvez não esteja correto...\n", x2);
    }

    return 0;
}

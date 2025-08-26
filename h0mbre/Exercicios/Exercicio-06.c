#include <stdio.h>

int main(void) 
{
    int numerador, denominador;
    
    
    printf("Insira o numerador: ");
    scanf("%d", &numerador);
    printf("Insira o denominador: ");
    scanf("%d", &denominador);
    
    if ((numerador%denominador) != 0)
    {
        printf("Há resto.");
    }
    else
    {
        printf("Não há resto.");
    }
    
    return 0;
}

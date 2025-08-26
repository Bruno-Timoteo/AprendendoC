#include <stdio.h>

int main() 
{
    int num, div;

    printf("Insira um número entre 1 e 500: ");	
    scanf("%d", &num);
    
    div = num/100;
    
    if (div < 1 || num == 100)
    {
        printf("O seu número está entre 1 e 100!");
    }
    
    else if (div < 2 || num == 200)
    {
        printf("O seu número está entre 101 e 200!");
    }
    
    else if (div < 3 || num == 300)
    {
        printf("O seu número está entre 201 e 300!");
    }
    
    else if (div < 4 || num == 400)
    {
        printf("O seu número está entre 301 e 400!");
    }
    else
    {
        printf("O seu número está entre 401 e 500!");
    }
}


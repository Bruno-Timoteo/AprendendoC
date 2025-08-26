#include <stdio.h>

#define NUMERO_DE_ARGUMENTOS 2 /* Numero fixo de argumentos */

int main(int argc, char *argv[])
{
    int i;
    
    /* NUMERO_DE_ARGUMENTOS = argc-1;  (número variável de argumentos). Caso prossiga com este, não há necessidade do bloco abaixo.*/ 
    
    if (argc != NUMERO_DE_ARGUMENTOS+1)
    {
        printf("O uso deste aplicativo deve ser:\n./exercicio09.c Argumento1 Argumento2...\nAté %d argumentos", NUMERO_DE_ARGUMENTOS);
        return 1;
    }
    
    
    for (i=1; i<=NUMERO_DE_ARGUMENTOS; i++)
    {
        printf("%s ", argv[i]);
    }
    return 0;
}

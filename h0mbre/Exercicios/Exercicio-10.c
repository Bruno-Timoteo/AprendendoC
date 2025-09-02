#include <stdio.h>

int main()
{
    int vetor[10], i, tamanho_vetor;
    
    
    /* 
    O vetor nem precisa ser inicializado, pois a memória para ele já foi alocada.
    Um int pesa geralmente 4 bytes, logo, o vetor pesa 40, mesmo sem nenhuma variável.
    
    Uma abordagem para alocar dinamicamente seria com malloc() e realloc(). 
    
    Acredito que farei algo do tipo nas próximas atividades.
    */
    
    
    tamanho_vetor = sizeof(vetor)/sizeof(int);
    
    printf("O tamanho do vetor é: %d", tamanho_vetor);

    return 0;
}

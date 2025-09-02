#include <stdio.h>

#define TAMANHO_VETOR 10
#define LIMITE_TESTES 8

int main()
{
    float vetor[TAMANHO_VETOR], soma=0, temp;
    int i=0;
    char confirmacao;
    
    do
    {
        printf("Insira a nota do teste %d: ", i+1);
        scanf(" %f", &vetor[i]);
        
        soma += vetor[i];
        
        i++;
        
        printf("Deseja continuar? (S/N) ");
        scanf(" %c", &confirmacao);
    } while((confirmacao == 'S' || confirmacao == 's') && (i < LIMITE_TESTES));
    
    printf("%.2f é a média.", soma/(i));
}

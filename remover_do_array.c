/* Este algoritmo busca remover um item de um array em C.

Ao pesquisar mais sobre o assunto, procurando algo como um equivalente de pop() no Python,
encontrei que, para remover algum índice de um array, é necessário mover todos os itens
para uma posição anterior.

Neste código busco gerar a minha implementação deste problema, mas ela provavelmente
não será boa/eficiente. Após isso, compararei com outros códigos feitos */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, remover, array_usuario[5], len_arr;
    bool invalido;
    
    for (i=0; i<5; i++)
    {
        printf("Insira o número que vai na posição %d: ", i+1);
        scanf("%d", &array_usuario[i]);
        printf("\n");
    }
    
    printf("O seu array está como:\n");

    for (i=0; i<5; i++)
    {
        printf("%d\n", array_usuario[i]);
    }
    
    len_arr = sizeof(array_usuario)/sizeof(int);
    
    if(len_arr == 0)
    {
        printf("Não há mais posições para serem removidas");
        return 0;
    }
    do
    {
        invalido = false;
        printf("Insira o índice do número que deseja remover: ");
        scanf("%d", &remover);
        printf("\n");
        
        if(remover >= len_arr || remover < 0)
        {
            printf("Valor inválido! Tente novamente.\n");
            invalido =  true;
        }
        
    } while(invalido);
    
    
    for (i=remover; i<len_arr-1; i++)
    {
        array_usuario[i] = array_usuario[i+1];
    }
    

    /* Problema: a última posição não é apagada */
    
    /* Solução 1: criar outro array com uma posição a menos */
    
    int array_final[len_arr-1];
    
    printf("O seu array final está como:\n");
    
    for (i=0; i<len_arr-1; i++)
    {
        array_final[i] = array_usuario[i];
        
        printf("%d\n", array_final[i]);
    }
    
    
    return 0;
}

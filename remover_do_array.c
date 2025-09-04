/* Este algoritmo busca remover um item de um array em C.

Ao pesquisar mais sobre o assunto, procurando algo como um equivalente de pop() no Python,
encontrei que, para remover algum índice de um array, é necessário mover todos os itens
para uma posição anterior.

Neste código busco gerar a minha implementação deste problema, mas ela provavelmente
não será boa/eficiente. Após isso, compararei com outros códigos feitos */

#include <stdio.h>


int main()
{
    int i, remover, array_usuario[5];
    
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
    
    
    
}

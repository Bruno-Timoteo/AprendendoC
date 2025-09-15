/* Segunda versão do algoritmo:

- Modularização em funções
- Substituir a criação de um segundo array por malloc
- Loop para repetir várias vezes

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void imprimir_array(int arr[], int tamanho)
{
    int i;
    
    for (i=0; i<tamanho; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int verificar_input(int tamanho_array)
{
    int remover;
    bool invalido;
    
    if(tamanho_array == 0)
    {
        printf("Não há mais posições a serem removidas");
        return -1;
    }
    
    do
    {
        invalido = false;
        printf("Insira a posição do número que deseja remover: ");
        scanf("%d", &remover);
        printf("\n");
        
        if(remover > tamanho_array || remover < 1)
        {
            printf("Valor inválido! Tente novamente.\n");
            invalido =  true;
        }
        
    } while(invalido);
    
    return remover-1;
}

int main()
{
    int i, remover, len_arr=5;
    char continuar;
    
    int* array_usuario = malloc(5 * sizeof(int));
    
    for (i=0; i<5; i++)
    {
        printf("\nInsira o número que vai na posição %d: ", i+1);
        scanf("%d", &array_usuario[i]);
        printf("\n");
    }
    
    do
    {
        
        printf("O seu array está como:\n");
    
        imprimir_array(array_usuario, len_arr);
        
        remover = verificar_input(len_arr);
        
        if(remover == -1)
        {
            break;
        }
        
        len_arr -= 1;
        
        /* Lógica para remoção */
        
        for (i=remover; i<len_arr; i++)
        {
            array_usuario[i] = array_usuario[i+1];
        }
        
        /* Problema: a última posição não é apagada */
        
        /* Solução 2: realocar memória (com verificação se diferente de NULL) */
        
        int* temp = realloc(array_usuario, sizeof(int) * len_arr);
        if (temp != NULL) 
        {
            array_usuario = temp;
        }
        
        else 
        {
            printf("Erro ao realocar memória.\n");
            free(array_usuario);
            return 1; // encerra com erro
        }
        
        
        printf("O seu array após a remoção está como:\n");
        imprimir_array(array_usuario, len_arr);
        

        printf("\nVocê deseja remover outra posição (S/N)? ");
        scanf(" %c", &continuar);
        printf("\n");
        
        /* Limpar o buffer do scanf. Seria interessante colocar outra função que não tem esse problema. */

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
    }while(continuar == 'S' || continuar == 's');
    
    free(array_usuario);
    
    return 0;
}


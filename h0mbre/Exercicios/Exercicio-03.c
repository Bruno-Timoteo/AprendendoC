#include <stdio.h>

/* Pesquisando sobre métodos de criação de arrays de caracteres com base no tamanho do input, encontrei soluções que utilizam
malloc, realloc e outras com ponteiros, como getline(). Pretendo, futuramente, quando aprender esses conceitos, refazer este exercício.

Verifiquei que o h0mbre, no repositório original, utilizou um método com ponteiros e um tipo especial no scanf(%ms). Este método
não é muito indicado, possivelmente não sendo suportado em todos os sistemas operacionais. (07/08/2025) */

int main(void) {
    char first_name[50];
    char last_name[50];
    
    printf("Enter your first name: ");
    scanf("%s", &first_name); 
    printf("\nEnter your last name: ");
    scanf("%s", &last_name);
    
    printf("\nHello %s %s!", first_name, last_name);
    
    return 0;
}

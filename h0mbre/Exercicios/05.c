#include <stdio.h>
#define SEGUNDOS_POR_HORA 3600 /* Como ensinado no K&R */
#define SEGUNDOS_POR_MINUTO 60 

int main()
{
    int segundos_input, segundos_final, horas_final, minutos_final;

    printf("Insira a quantidade de segundos: ");
    scanf("%d", &segundos_input);
    
    /* Algoritmo
    Dividir o número de segundos por 3600 para pegar as horas.
    Dividir o resto da divisão anterior por 60 para pegar os minutos.
    O resto da divisão dos segundos por 60 resulta nos segundos.
    */
    
    horas_final = segundos_input / SEGUNDOS_POR_HORA;
    minutos_final = (segundos_input % SEGUNDOS_POR_HORA) / SEGUNDOS_POR_MINUTO;
    segundos_final = segundos_input % SEGUNDOS_POR_MINUTO;
    
    printf("%d segundos são iguais a %d horas, %d minutos e %d segundos.", segundos_input, horas_final, minutos_final, segundos_final);
    return 0;
}

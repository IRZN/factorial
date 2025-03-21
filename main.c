#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, cont=0;
    char r;
    double fator = 1; 
    //double tem menos limite que as outras variaveis

    do {
    printf("\nDigite um numero para descobrir seu fatorial: \n");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    //Loop que vai de '1' ate 'n'
        fator *=i;
        // Multiplica 'f' pelo valor atual de 'i' e armazena o resultado em 'f'

    printf("\nO fatorial do numero escolhido eh: %.0lf \n", fator);
    // .0lf e o codigo de saida para cortar os '0' desnecessarios e a notação cientifica

    printf("\nQuer descobrir outro? \n");
    printf("S - Sim \nN - Nao \n");
    scanf(" %c", &r);

        if (r == 'n' || r == 'N') {
            cont = -1;
        } else {
            fator = 1;
        }

    }while (cont > -1);

    return 0;
}
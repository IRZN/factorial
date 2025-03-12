#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    long long int fator =1; // Usa-se long long int para evitar Overflow
    // Overflow eh um estouro de variavel - ocorre quando a Saida eh maior que o limite de armazenamento
    // o int so consegue armazenar ate a casa do bilhao, ja o long long ate o quintilhao

    printf ("Digite um numero para descobrir seu fatorial: \n");
    scanf ("%i", &num);

    for(int i =1; i <= num; i++) // Loop que vai de 1 ate 'n'
        fator *=i; // Multiplica 'f' pelo valor atual de 'i' e armazena o resultado em 'f'

    printf("O fatorial do numero escolhido eh: %llu \n", fator);
    // llu e o codigo de assimilacao do long long , assim como %i ou %d

    // Atualmente o codigo s suporta entrada ate o numero 20
    // apartir disso ja ultrapassa o limite do long long


    return 0;
}

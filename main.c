#include <stdio.h>

// questao 1
int main()
{
    int indice = 13;
    int soma = 0;
    int k = 0;

    while (k < indice)
    {
        k = k + 1;
        soma = soma + k;
        printf("%i, ", soma);
    }
    printf("Resultado final da soma: %i", soma);
}


#include <stdio.h>

// questao 2 ; sequencia de fibonacci
int main()
{
    int num0 = 0;
    int num1 = 1;
    int fibo = 0;
    int resp;
    int verdadeiro = 0;

    printf("Digite um numero para saber se ele faz parte da sequencia de fibonacci (sem ser 0 e 1): ");
    scanf("%i", &resp);

    while(num0 < resp)
    {
        printf("%i , ", fibo);
        fibo = num0 + num1;
        num0 = num1;
        num1 = fibo;
        if (fibo == resp)
        {
            printf("%i, faz parte da sequencia de fibonacci.", resp);
            verdadeiro = 1;
            break;
        }
    }
    if(verdadeiro == 0)
    {
        printf("\n%i, nao faz parte da sequencia de fibonacci", resp);
    }

    //return 0;
}

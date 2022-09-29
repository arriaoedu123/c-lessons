#include <stdio.h>

void main()
{
    // Criar um array com 10 elementos
    int array[10];

    // Solicitar que o usuário informe os 10 valores para preenchimento do array
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Informe o valor para a posição %d: ", i);
        scanf("%d", &array[i]);
    }

    // Calcular a soma apenas dos valores pares informados pelo usuário
    int soma = 0;
    for (i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            soma += array[i];
        }
    }

    printf("A soma dos valores pares é: %d", soma);
}
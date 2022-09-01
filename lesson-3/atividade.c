#include <stdio.h>
#include <locale.h>

/**
 * @brief
 *
 */

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("A média é: %.2f", media);

    if (media >= 6)
    {
        printf("\n\nParabéns! Você foi aprovado!\n");
    }
    else
    {
        printf("\n\nInfelizmente você foi reprovado!\n");
    }
}
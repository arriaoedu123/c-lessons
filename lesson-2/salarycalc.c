#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
    float ht, vh, pd, sb, vd, sl;

    printf("\n----- SOMA DO SALÁRIO -----\n");
    printf("\nDigite as horas trabalhadas: ");
    scanf("%f", &ht);

    printf("Digite o valor por hora: R$");
    scanf("%f", &vh);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &pd);

    sb = vh * ht;
    vd = sb * (pd / 100);
    sl = sb - vd;

    printf("\nSalário bruto: R$%.2f\n", sb);
    printf("Desconto: R$%.2f\n", vd);
    printf("Salário líquido: R$%.2f\n", sl);

    return (0);
}
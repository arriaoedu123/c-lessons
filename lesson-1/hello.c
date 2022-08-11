#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
   int a, b, total;
   printf("\n----- SOMA DE DOIS NÚMEROS -----\n");
   printf("\nDigite um número: ");
   scanf("%d", &a);
   printf("Digite outro número: ");
   scanf("%d", &b);
   total = a + b;
   printf("O total é: %d\n", total);
   return 0;
}
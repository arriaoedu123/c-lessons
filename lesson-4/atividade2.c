#include <stdio.h>

void main()
{
    // Calcular e apresentar a média de cada aluno (4 alunos com 2 notas)
    float alunos[4];
    int i;

    for (i = 1; i < 5; i++)
    {
        float nota1, nota2;
        printf("Informe a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);
        printf("Informe a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);
        alunos[i] = (nota1 + nota2) / 2;
    }

    for (i = 1; i < 5; i++)
    {
        printf("\nA média do aluno %d é: %.2f", i, alunos[i]);
    }
}
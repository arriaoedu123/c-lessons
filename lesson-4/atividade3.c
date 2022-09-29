#include <stdio.h>

void main()
{
    struct cad_aluno
    {
        char nome[50];
        float nota1;
        float nota2;
    };

    struct cad_aluno aluno;

    // Informar o nome do aluno
    printf("Informe o nome do aluno: ");
    scanf("%s", &aluno.nome);
    // Informar duas notas do aluno
    printf("Informe a primeira nota do %s: ", aluno.nome);
    scanf("%f", &aluno.nota1);
    printf("Informe a segunda nota do %s: ", aluno.nome);
    scanf("%f", &aluno.nota2);
    // Calcular e apresentar a média do aluno
    printf("\nA média do aluno %s é: %.2f", aluno.nome, (aluno.nota1 + aluno.nota2) / 2);
}
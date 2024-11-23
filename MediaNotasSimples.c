#include <stdio.h>

int main()
{                                     // Calculando média de notas!
    float nota1, nota2, nota3, media; // Define as variáveis como números decimais
    char nome[50];                    // Define a variável como String (array de caracteres)
    int idade, matricula;             // Define as variáveis como inteiros

    printf("Olá! Vamos calcular a média de duas notas do ano.\nAntes, preciso somente de algumas informações, vamos lá?\n");
    printf("\n"); // Salta uma linha

    printf("Me informe seu primeiro nome: ");
    scanf("%s", &nome);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe sua matricula: ");
    scanf("%d", &matricula);
    printf("\n");

    printf("Confirmando seus dados:\nNome: %s\nIdade: %d\nMatrícula: %d", nome, idade, matricula);
    printf("\n");

    printf("Obrigado %s, agora vamos às suas notas!\n", nome);
    printf("\n");

    printf("Digite sua nota do primeiro Trimestre:\n");
    scanf(" %f", &nota1); // Armazena o número inserido na variável

    printf("Agora digite sua nota do Segundo Trimestre: \n");
    scanf("%f", &nota2);

    printf("Agora digite sua nota do Terceiro Trimestre: \n");
    scanf("%f", &nota3);
    printf("\n");

    printf("Suas notas:\nPrimeiro Trimestre: %.2f\nSegundo Trimestre: %.2f\nTerceiro Trimestre: %.2f\n", nota1, nota2, nota3);

    media = (nota1 + nota2 + nota3) / 3; // Soma as 3 notas e divide por 3 para calcular a média
    printf("\n");
    printf("%s, sua média foi: %.2f!\n", nome, media);

    return 0;
}

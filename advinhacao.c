#include <stdio.h>
#include <locale.h>

#define NUM_TENTATIVAS 5

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("*****************************************\n");
    printf("*          Jogo da Advinhacao!          *\n");
    printf("*****************************************\n");

    int num_secreto = 45, chute, acertou, maior;

    printf("Tente advinhar em qual numero estou pensando.\n");

    for (int i = 0; i < NUM_TENTATIVAS; i++)
    {
        printf("Tentativas: %d\n\n", NUM_TENTATIVAS - i);
        
        printf("Digite um numero inteiro: ");
        scanf("%d", &chute);

        printf("Seu chute foi %d\n", chute);

        acertou = chute == num_secreto;

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            break;
        }
        else
        {
            printf("Voce errou!\n");

            maior = chute > num_secreto;

            if (maior)
            {
                printf("Seu chute foi maior que o numero que eu pensei!\n");
            }
            else
            {
                printf("Seu chute foi menor que o numero que eu pensei!\n");
            }
        }
    }

    printf("Jogue novamente!\n");
}
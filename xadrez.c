// Torre = move-se em linha reta = vai se mover 5 casas para direita
// Bispo = move-se na diagonal = tem que se mover 5 casas na diagonal para cima e à direita
// Rainha = move-se em todas as direções = tem que se mover 8 casas para esquerda
// Cavalo = move-se duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente = tem que se mover 2 casas para cima e uma casa para a direita


#include <stdio.h>

void torre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        torre(casas - 1);
    }

}

void bispo(int casas)
{
    if (casas > 0)
    {
        // Loop externo - movimento vertical
        for (int vertical = 0; vertical < 1; vertical++)
        {

            printf("Cima, ");

            // Loop interno - movimento horizontal
            for (int horizontal = 0; horizontal < 1; horizontal++)
            {

                printf("Direita\n");
            }
        }
        bispo(casas - 1);
    }
    
}

void rainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
    
}

void cavalo(){
    
    int cavalo = 1; // Declara variável

    // while + for
    while (cavalo--) 
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Cima, ");
       }
       printf("Direita\n");
    }

}

int main()
{

    // Mover a Torre 5 casas para a direita
    printf("Movimento da Torre:\n");
    torre(5);
    printf("\n");

    // Mover o Bispo 5 casas na diagonal para cima e à direita
    printf("Motimento do Bispo\n");
    bispo(5);
    printf("\n");

    // Mover a Rainha 8 casas para à esquerda
    printf("Movimento da Rainha:\n");
    rainha(8);
    printf("\n");


    // Mover cavalo 2 casas para cima e uma casa para a direita
    printf("Movimento do Cavalo:\n");
    cavalo();
    printf("\n");

    return 0;
}
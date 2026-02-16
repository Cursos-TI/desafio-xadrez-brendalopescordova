#include <stdio.h>

int main()
{

    // Torre = move-se em linha reta = vai se mover 5 casas para direita
    // Bispo = move-se na diagonal = tem que se mover 5 casas na diagonal para cima e à direita
    // Rainha = move-se em todas as direções = tem que se mover 8 casas para esquerda
    // Cavalo = move-se duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente = tem que se mover 2 casas para baixo e 1 casa para a esquerda
    // Usar printf para simular o movimento, vai imprimir a direção que a peça se movimenta
    // usar while, do while e for. Um para cada peça

    // Mover a Torre 5 casas para a direita
    for (int torre = 0; torre < 5; torre++)
    {
        printf("A Torre está se movendo para a direita\n"); // Imprime a direção do movimento
    }

    int bispo = 1; 

    // While = enquanto
    while (bispo <= 5) // Enquanto i for igual ou menor que 5, o código vai se repetir
    {
        printf("O Bispo está se movendo na diagonal para cima e à direita\n");
        bispo++; // Encremento é a condição final, que faz código de rodar
                 // bispo++ significa que a cada vez que o codigo rodar, bispo vai receber +1
    }

    int rainha = 1; // Declara variável

    do // Do mostra a primeira execução para depois testar o while. Sempre vai fazer a primeira execução idependente da condição
    {
        printf("A Rainha está se movendo para a esquerda\n");
        rainha++; // Encremento é a condição final, que faz código de rodar
    } while (rainha <= 8); 

    printf("\n");

    int cavalo = 1; // Declara variável

    // Loop aninhado while + for
    while (cavalo--) // Variável -- decremento
    {
       for (int i = 0; i < 2; i++) // i = 0; enquanto i for menor que 2; i recebe + 1, o código vai se repetir 
       {
        printf("O Cavalo está se movendo para baixo, ");  
       }
       printf("O Cavalo está se movendo para a esquerda\n"); 
    }
    
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main () {
    printf("******************************************\n");
    printf("bem vindo ao jogo de adivinhação\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativa = 0;
    double pontos = 1000; 
    int acertou = 0;

    int nivel;
    printf("qual nivel de dificuldade\n");
    printf(" fácil(1), médio (2), (3) dificíl\n");
    printf("escolha: ");
    scanf("%d", &nivel);


    int numerodetentativas;

    switch(nivel) {
        case 1:
        numerodetentativas = 20;
        break;
        case 2:
        numerodetentativas = 10;
        break;
        default:
        numerodetentativas = 6;
        break;
    }



    for(int i = 1; i <= numerodetentativas; i++) {
        printf( "tentativa %d\n", tentativa);
        printf("qual é o seu chute?\n ");
        
        scanf("%d", &chute);
        printf("seu chute foi %d\n ", chute);


        if (chute < 0) {
            printf("vc não pode colocar números negativos ");
            continue;
        }

        


        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        }
    

        else if(maior) {
            printf("seu chute foi maior que o numero secreto\n");
                } 

        else {
            printf("seu numero foi menor que o numero secreto\n");

            }
            tentativa++;
            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;
        
            }
            

            printf("fim de jogo\n");

            if(acertou) {
                printf("Vc ganhou\n");
                printf("voce acertou em %d tentativas!\n", tentativa);
                printf("total de pontos: %.1f\n", pontos);

            } else {
                printf("vc perdeu tente de novo\n");
            
        } 
}  

    
     
    

    
    

    


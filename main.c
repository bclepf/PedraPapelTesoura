#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   
    int numeroUser;
    char restart; 

    do{

    srand(time(NULL));

    int numeroMaq = rand()%3;
    
    
    printf("\n-----Bem vindo ao Pedra Papepl Tesoura-----\n");
    printf("Escolha o que deseja jogar:\n 0-Pedra\n 1-Papel\n 2-Tesoura\n");
    scanf("%d", &numeroUser);

    if (numeroUser < 0 ||numeroUser > 2)
    {
        printf("Essa opção não existe por favor selecione apenas um dos numeros validos");
        continue;       
    }
    

    if (numeroUser == numeroMaq)
     {
        printf("Empate!\n");
    } else if ((numeroUser == 0 && numeroMaq == 2) || (numeroUser == 1 && numeroMaq == 0) || (numeroUser == 2 && numeroMaq == 1)) 
    {
        printf("Voce ganhou!\n");
    } 
    else 
    {
        printf("O computador ganhou!\n");
    }

    printf("Deseja jogar novamente? (s/n): ");
    scanf(" %c", &restart); 
    } while (restart == 's' || restart == 'S');

    return 0;
}
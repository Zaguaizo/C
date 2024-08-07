// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 100
int main() {
    //Quantidade de linhas e colunas
    unsigned short int QtdLin, QtdCol;
    puts("Quantas linhas você deseja?");
    scanf("%hu", &QtdLin);
    puts("Quantas colunas você deseja?");
    scanf("%hu", &QtdCol);
    //Alocação
    unsigned char **pm;
    
    pm = (unsigned char **) malloc(QtdLin * sizeof(unsigned char *));
    for(int k = 0;k < QtdLin;k++){
        *(pm+k) = (unsigned char *) malloc(QtdCol * sizeof(unsigned char));
    }
    //Pondo números aleatórios
    for(int k = 0;k < QtdLin; k++){
        for(int j = 0; j < QtdCol; j++){
            *(*(pm+k)+j) = rand() % 100; 
        }
    }
    //Visualizando
    for(int k = 0;k < QtdLin; k++){
        printf("\n");
        for(int j = 0; j < QtdCol; j++){
            printf("%d ",*(*(pm+k)+j)) ; 
        }
    }
    printf("\n");
    //Maior e menor
    int maior, menor = **pm;
    for(int k = 0;k < QtdLin; k++){
        for(int j = 0; j < QtdCol; j++){
             maior=(maior < *(*(pm+k)+j))?*(*(pm+k)+j):maior;
             menor=(menor > *(*(pm+k)+j))?*(*(pm+k)+j):menor;
        }
    }
    printf("\nO maior é: %d\nO menor é: %d", maior, menor);
    

    return 0;
}

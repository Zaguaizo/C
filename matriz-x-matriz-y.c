#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10
int main() {
    int QtdCol, QtdLin,t;
    //Usuário
    puts("Insira respectivamente a quantidade de Linhas e colunas:");
    scanf("%d", &QtdCol);
    scanf("%d", &QtdLin);
    puts("Insira um valor T de referência:");
    scanf("%d", &t);
    //Alocação de memória
    int **x;
    int **y;
    y = (int**)malloc(QtdLin*sizeof(int*));
    x = (int**)malloc(QtdLin*sizeof(int*));
    for(int k = 0; k < QtdLin; k++){
        *(x+k) = (int*)malloc(QtdCol*sizeof(int));
        *(y+k) = (int*)malloc(QtdCol*sizeof(int));
    }
    //Pondo números aleatórios
    srand(time(NULL));
    for(int i = 0; i< QtdLin; i++){
        for(int j = 0; j < QtdCol; j++){
           *(*(x+i)+j) = rand() % MX;
        }
    }
    //Visualização da matriz X
    puts("Matriz X:");
    for(int i = 0; i< QtdLin; i++){
        if(i>0){
            puts("\n");
        }
        for(int j = 0; j < QtdCol; j++){
           printf("%d ", *(*(x+i)+j));
        }
    }
    //Comparação de X para Y
    for(int i = 0; i< QtdLin; i++){
        for(int j = 0; j < QtdCol; j++){
           if(*(*(x+i)+j)>t){
               *(*(y+i)+j) = 1;
           }
           else{
               *(*(y+i)+j) = 0;
           }
        }
    }
    //Visualização da matriz Y
    puts("\nMatriz Y:");
    for(int i = 0; i< QtdLin; i++){
         if(i>0){
            puts("\n");
        }
        for(int j = 0; j < QtdCol; j++){
           printf("%d ", *(*(y+i)+j));
        }
    }
    return 0;
}

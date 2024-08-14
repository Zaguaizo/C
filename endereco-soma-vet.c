#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10
int main() {
    int *x = NULL;
    int *y = NULL;
    int *p = NULL;
    //Usuário
    int n;
    puts("Qual o tamanho do vetor desejado?");
    scanf("%d",&n);
    //Alocamento de memória
    x = (int *)malloc(n * sizeof(int));
    y = (int *)malloc(n * sizeof(int));
    p = (int *)malloc(n * sizeof(int));
    //Preenchimento aleatório dos vetores
    srand(time(NULL));
    for(int i = 0; i<n;i++){
        *(x + i) = rand() % MX;
        *(y + i) = rand() % MX;
    }
    //Soma dos vetores
    for (int i = 0; i < n; i++) {
        *(p + i) = *(x + i) + *(y + i); 
    }
    //Procurar o par
    int **v = (int**)malloc(2*sizeof(int*));
    for(int i = 0; i < n; i++){
        if(*(p + i) % 2 == 0){
            *v = x+i;
            *(v+1) = y+i;
        }
    }
    for(int i = 0; i < 2; i++){
        printf("[%p]: O %dº numero é: %d\n",*(v+i), i+1, **(v+i));
    }
    return 0;
}

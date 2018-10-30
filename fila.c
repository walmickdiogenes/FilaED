#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define MAX 11

long long int dado[MAX];
int topo;
int op;

void imprimeFila (void){ //exibe os itens da fila
    filaVazia(true);
    for(int temp=0;topo-1 >= temp ;temp++){
        printf("Na posicao %d temos o cliente %lld\n",temp+1,dado[temp]);
    }
    system("PAUSE");
}

void enfileira(void){ //insere um item no final da fila
        filaCheia(true);
        printf("Informe o DDD + telefone no formato XXXXXXXXXXX \n");
        scanf("%lld",&dado[topo]);
        topo++;
}

void desenfileira(long long int x[]){ //remove o topo da fila
    filaVazia(true);
    printf("Numero em atendimento: %lld \n", dado[0]);
    system("PAUSE");
    for (int i=0;i<=topo-1;i++){
        dado[i] = x[i+1];
    }

    topo--;
}

void fazFilaVazia(){ //limpa a fila
    printf("Os %d terminais estao vagos\n", MAX);
    system("PAUSE");
    topo=0;
}

void filaVazia(){ //verifica se a fila esta vazia
    if (topo==0){
        printf("Todas as chamadas foram atendidas\n");
        return true;
    }
    else{
        return false;
    }
}

void filaCheia(){ //verifica se a fila esta cheia
    if (topo==MAX){
        printf("Todos os terminais estão ocupados, tente novamente mais tarde\n");
        return true;
    }
    else{
        return false;
    }
}






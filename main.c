#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 11

long long int dado[MAX];
int topo;
int op;

int home(){ //menu
    printf("\t\t\t  ===== CALL  CENTER =====\n");
    printf("1 | NOVO NUMERO\n"); //INSERIR()
    printf("2 | VER FILA\n"); //IMPRIMIR()
    printf("3 | ATENDER O PROXIMO\n"); //REMOVER()
    printf("4 | LIMPAR FILA\n"); //LIBERAR()
    printf("5 | ENCERRAR\n");
    scanf("%d",&op);
    switch (op){
        case 1 : enfileira();
             break;
        case 2 : imprimeFila();
            break;
        case 3 : desenfileira(dado);
            break;
        case 4 : fazFilaVazia();
            break;
    }
    return 0;
}

int main(){
    //travando o console
    system("mode con:cols=80 lines=30");

    topo=0;
    while (op!=5){
          system("cls");
          home();
          }
    return 0;
}

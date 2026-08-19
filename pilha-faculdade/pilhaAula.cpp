#include <stdio.h>
#include <stdbool.h>
#define MAX 100



typedef struct {
    int itens[MAX];
    int topo;
}Pilha;

void inicializar(Pilha *p){
    p->topo = -1;
}

bool pilhaCheia(Pilha *p){
    return p->topo == MAX - 1;
}

bool pilhaVazia(Pilha *p){
    return p->topo == -1;
}

void empilhar(Pilha *p,int valor){
    if(pilhaCheia(p)){
        printf("Stack Overflow\n");
    }
    else {
        p->topo++;
        p->itens[p->topo] = valor;
        printf("Empilhado com sucesso!\n");
    }
}

void desempilhar(Pilha *p){

    if(pilhaVazia(p)){
        printf("Stack Underflow\n");
    }
    else {
        p->topo--;
        printf("Desempilhado com sucesso!\n");
    }

}

int main(){

    Pilha p;
    inicializar(&p);

    printf("Menu:\n");
    printf("1- Empilhar\n");
    printf("2- Desempilhar\n");
    printf("0- Sair\n");
     int escolha; scanf("%d",&escolha);

    while(escolha != 0) {

         if(escolha == 1) {
        int numero; scanf("%d",&numero);
        empilhar(&p,numero);
    }

    else if(escolha == 2) {
        desempilhar(&p);
    }

    else if(escolha != 0){
        printf("Numero invalido! Tente novamente\n");
        printf("\n");
    }

    printf("Menu:\n");
    printf("1- Empilhar\n");
    printf("2- Desempilhar\n");
    printf("0- Sair\n");
    scanf("%d",escolha);


    }
   
   


    return 0;
}
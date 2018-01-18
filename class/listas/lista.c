#include <cs50.h>
#include <stdio.h>

int insertar(int dato);

//Se definie la estructura nodo con la que se trabajara para crear las listas enlazadas
struct nodo{
    int dato;
    struct nodo *siguiente;
};

struct nodo *primero = NULL;//Inicio de la lista enlazada
struct nodo *ultimo = NULL;//Ultimo elemento ingresado


int main(void){

    //Agregamos elementos
    insertar(15);
    insertar(2);
    insertar(10);

    //Mostremos los elementos de la lista
    struct nodo *actual = primero;
    do{
        printf("%d\n",actual->dato);
        actual = actual->siguiente;
    }while(actual != NULL);
}

int insertar(int dato){

    struct nodo *nuevo = malloc(sizeof(struct nodo));

    if(nuevo ==NULL){
        printf("No hay suficiente memoria!!!");
        return -1;
    }
    nuevo->dato = dato;

    //Evaluamos los siguientes casos
    if(primero == NULL){//Si el nodo raiz es nulo entonces la lista esta vacia
        primero = nuevo;
        ultimo = primero;
    }
    else{
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
    return 0;
}
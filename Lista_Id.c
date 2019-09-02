#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------- CARACTERES DE PUNTUACION --------------
typedef struct nodoCaracterPuntuacion{
    char *identificador;
    int contador ;
    struct nodoCaracterPuntuacion *sig;
}caracter_puntuacion;

caracter_puntuacion *listaCaracter(caracter_puntuacion *lista){
    lista = NULL;
    return lista;
}

caracter_puntuacion *agregarCaracter(caracter_puntuacion *lista, char *identificador){
    caracter_puntuacion *nuevo_caracter, *aux, *aux2;
    nuevo_caracter = (caracter_puntuacion*)malloc(sizeof(caracter_puntuacion));
    nuevo_caracter->identificador = identificador;
    nuevo_caracter->contador = 1;
    nuevo_caracter->sig = NULL;
    aux = lista;

    if(lista==NULL){
        lista = nuevo_caracter;
    }
    else{
        
        while(aux !=NULL){
            if(aux->identificador == identificador){
                aux->contador = aux->contador +1;
                return lista;
            }
            aux2=aux;
            aux=aux->sig;

        }
        aux2->sig = nuevo_caracter;
    }
    return lista;
}

int main(){
    caracter_puntuacion *lista = listaCaracter(lista);
    

    ///--- PRUEBA DE CARACTERES ---
    lista = agregarCaracter(lista, "hola");
    lista = agregarCaracter(lista, "hola");
    lista = agregarCaracter(lista, "chau");
    lista = agregarCaracter(lista, "cha");
    lista = agregarCaracter(lista, "uuu");
    while(lista!=NULL){
        printf("%s ", lista->identificador);
        printf(",%d \n",lista->contador);
        lista = lista->sig;
    }

    return 0;
}
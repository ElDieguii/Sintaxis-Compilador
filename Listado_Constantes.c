#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------- CARACTERES DE PUNTUACION --------------
typedef struct nodoCaracterPuntuacion{
    char *constante;
    struct nodoCaracterPuntuacion *sig;
}caracter_puntuacion;

caracter_puntuacion *listaCaracter(caracter_puntuacion *lista){
    lista = NULL;
    return lista;
}

caracter_puntuacion *agregarCaracter(caracter_puntuacion *lista, char *constante){
    caracter_puntuacion *nuevo_caracter, *aux, *aux2;
    nuevo_caracter = (caracter_puntuacion*)malloc(sizeof(caracter_puntuacion));
    nuevo_caracter->constante = constante;
    nuevo_caracter->sig = NULL;
    aux = lista;

    if(lista==NULL){
        lista = nuevo_caracter;
    }
    else{
        
        while(aux !=NULL){
            if(aux->constante == constante){
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
    lista = agregarCaracter(lista, "0123");
    lista = agregarCaracter(lista, "0456");
    lista = agregarCaracter(lista, "0x5");
    lista = agregarCaracter(lista, "0X45");
    lista = agregarCaracter(lista, "5e24");
    lista = agregarCaracter(lista, "6E24");
    lista = agregarCaracter(lista, "123");
    lista = agregarCaracter(lista, "456");
    while(lista!=NULL){
        printf("%s \n", lista->constante);
        
        lista = lista->sig;
    }

    return 0;
}
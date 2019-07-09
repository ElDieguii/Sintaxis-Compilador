#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//------ COMENTARIOS ----------
typedef struct nodoComentario{
    char *comentario;
    struct nodoComentario *sig;
}comentarios;

comentarios *listaDeComentarios (comentarios *lista){
    lista = NULL;
    return lista;
}

comentarios *listarComentario(comentarios*lista, char *comentario){
    comentarios *nuevo_comentario, *aux, *aux2;
    nuevo_comentario = (comentarios*)malloc(sizeof(comentarios));
    strcpy(nuevo_comentario->comentario, comentario);
    nuevo_comentario->sig = NULL;
    aux = lista;

    if(lista==NULL){
        lista = nuevo_comentario;
    }
    else{
        while(aux !=NULL){
            aux2=aux;
            aux=aux->sig;

        }
        aux2->sig = nuevo_comentario;
    }
    return lista;
}








//------- CARACTERES DE PUNTUACION --------------
typedef struct nodoCaracterPuntuacion{
    char caracter;
    int contador ;
    struct nodoCaracterPuntuacion *sig;
}caracter_puntuacion;

caracter_puntuacion *listaCaracter(caracter_puntuacion *lista){
    lista = NULL;
    return lista;
}

caracter_puntuacion *agregarCaracter(caracter_puntuacion *lista, char caracter){
    caracter_puntuacion *nuevo_caracter, *aux, *aux2;
    nuevo_caracter = (caracter_puntuacion*)malloc(sizeof(caracter_puntuacion));
    nuevo_caracter->caracter = caracter;
    nuevo_caracter->contador = 1;
    nuevo_caracter->sig = NULL;
    aux = lista;

    if(lista==NULL){
        lista = nuevo_caracter;
    }
    else{
        
        while(aux !=NULL){
            if(aux->caracter == caracter){
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
    comentarios *listaComentarios = listaDeComentarios(listaComentarios); 

    ///--- PRUEBA DE CARACTERES ---
    lista = agregarCaracter(lista, 'a');
    lista = agregarCaracter(lista, 'b');
    lista = agregarCaracter(lista, 'b');
    lista = agregarCaracter(lista, 'd');
    lista = agregarCaracter(lista, 'c');
    lista = agregarCaracter(lista, 'b');
    lista = agregarCaracter(lista, 'd');
    lista = agregarCaracter(lista, 'c');
    while(lista!=NULL){
        printf("%c ", lista->caracter);
        printf(",%d \n",lista->contador);
        lista = lista->sig;
    }

    //--- PRUEBA DE COMENTARIOS ---
    //listaComentarios = listarComentario(listaComentarios, "asfasf");
    /* listaComentarios = listarComentario(listaComentarios, "asfasfg");
    /* while(listaComentarios!=NULL){
        printf("%s ", listaComentarios->comentario);
        listaComentarios = listaComentarios->sig;
    }
    */

    return 0;
}
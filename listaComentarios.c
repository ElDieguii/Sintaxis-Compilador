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

int main(){
    comentarios *listaComentarios = listaDeComentarios(listaComentarios); 
        //--- PRUEBA DE COMENTARIOS ---
    listaComentarios = listarComentario(listaComentarios, "asfasf");
    listaComentarios = listarComentario(listaComentarios, "asfasfg");
    while(listaComentarios!=NULL){
        printf("%s ", listaComentarios->comentario);
        listaComentarios = listaComentarios->sig;
    }
    
}
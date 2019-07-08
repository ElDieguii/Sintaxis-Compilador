#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

typedef struct nodo
{
    char caracter_puntuacion;
	int contador_puntuacion;
	struct nodo *sig;
} nodo_caract_puntuacion;
typedef nodo_caract_puntuacion* lista;

void insFront(lista *L, char caracter);
void mostrar(nodo_caract_puntuacion*L);

int main(){
	
	lista milista=NULL;
    char c[1];
    int insertar;
    scanf("%d", &insertar);
    while(insertar){
		printf("Ingrese el numero para agregar a la lista:\n");
		scanf("%s",&c);
		insFront(&milista,c[0]);
        scanf("%d", &insertar);
    }

    mostrar(milista);

    getch();
    return 0;
}

void mostrar(nodo_caract_puntuacion* L){
	if (L!=NULL){
		//Muestra el valor actual en pantalla
		printf(" |%c|->",L->caracter_puntuacion);
		//Llama la función con el próximo valor.
		mostrar(L->sig);
	}
}


void insFront (lista *L, char caracter){
	lista nuevo_nodo= malloc(sizeof(nodo_caract_puntuacion)); 
	nuevo_nodo->caracter_puntuacion = caracter; 

	lista aux = L;
    lista aux2;

    if(L == aux){
        L = nuevo_nodo;
    }	
    else{
        aux2->sig = nuevo_nodo;
    }
    nuevo_nodo->sig = aux;
	printf("Se agrego el %c a la lista\n", caracter);
}
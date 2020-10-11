
/*******************************************************************************
  @file     +main.c+
  @brief    +Funcion que clasifica la entrada y muestra la salida esperada
  @author   +Grupo 1+
 ******************************************************************************/

#include <stdio.h>
#include "clasificar.h"

#define ENTRADAS_MAX 30  //Tamaño maximo de strings por vector que se pueden ingresar

int main(int args, char **argv){

    char *clave[ENTRADAS_MAX] = {NULL};                 //Declaramos e inicializamos los vector con punteros nulos
    char *valor[ENTRADAS_MAX] = {NULL};
    char *param[ENTRADAS_MAX] = {NULL};
    int i = 0;
 
    clasificarEntrada(clave, valor, param, args, argv); //Separamos las opciones de los parametros  

    
    //Imprimimos la salida deseada
    while(clave[i] != NULL){  
        printf("Opcion %d: Clave: %s Valor: %s\n", i+1, clave[i], valor[i]);
        i++;
    }

    i = 0;
    while(param[i] != NULL){
        printf("Parametro %d: %s\n", i+1, param[i]);
        i++;
    }

    return 0;
}

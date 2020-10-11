
#include "clasificar.h"

/*
    clasificarEntrada: La funcion recibe por parametro tres vectores de punteros a char, un vector de strings y la cantidad de strings
    que almacena este ultimo vector. Luego, recorre los strings de entrada:
                
                @ Si el string comienza con '-', se interpreta al string como una clave y se almacenan en el vector clave y valor los punteros
                    a la clave y el valor respectivamente.
                
                @ Si el string no comienza con '-', se interpreta como un parametro y se almacena el puntero al inicio del string en el vector
                    parametro. 

    La funcion no devuelve valores.
*/

void clasificarEntrada(char *clave[], char *valor[], char *param[], int vSize, char **entrada){
    
    int posOpcion = 0;
    int posParam = 0;

    //Empezamos el contador i en 1 para ignorar el nombre del archivo
    for(int i = 1; i < vSize; i++){
        if(entrada[i][0] == '-'){                       //Si es una opcion
            clave[posOpcion] = &entrada[i][1];          //Guardamos el puntero a la clave
            valor[posOpcion] = &entrada[i+1][0];        //Guardamos el valor asociado a la clave
            i++;                                        //Nos salteamos una palabra ya que corresponde al valor ya guardado
            posOpcion++;                                //Avanzamos a la siguiente posicion para guardar la siguiente opcion
        }   
        else{                                           //Si es un parametro
            param[posParam] = &entrada[i][0];           //Guardamos el puntero al parametro
            posParam++;                                 //Aumentamos en uno 
        }
    }
    
}

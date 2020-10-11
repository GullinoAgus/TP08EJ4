
#ifndef _CLASIFICAR_H_
#define _CLASIFICAR_H_

/**
 * @brief clasificarEntrada: La funcion debe clasificar la entrada segun sea opcion o parametro y devolver en los tres vectores los punteros al inicio de cada uno. Ignora el primer string recibido como entrada.
 * @param char *clave[]: vector de punteros a string que guarda las claves
 * @param char *valor[]: vector de punteros a string que guarda los valores
 * @param char *param[]: vector de punteros a string que guarda los parametros
 * @param int vSize: cantidad de strings que contiene el vector entrada
 * @param char **entrada:  vector de strings
 * @return La funcion no devuelve parametros
*/

void clasificarEntrada(char *clave[], char *valor[], char *param[], int vSize, char **entrada);

#endif //_CLASIFICAR_H_

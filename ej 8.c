#include <stdio.h>
#include <string.h>
int main (){
    //ACLARACION: en los comentarios cuando se menciona que un string es mas
    //"grande" o "pequeño" que otro se refiere a su posicion alfabetica.
    //El programa busca la palabra mas "pequeña" alfabeticamente.
    
    //Declaracion de variables
    int i = 0;
    char col3[30] = {0};
    //Se inicializa en 250 todos los valores del string col4 para que
    //por defecto sea mas "grande alfabeticamente" que el string col3 
    //y el programa funcione correctamente
    char col4[30] = {250};
    
    //Mientras que i>=0 (Solo pasa a valer menos de 0 cuando se introduce FIN)
    while(i>=0){
        //Se le piden los nombres de las personas al usuario
        printf("\nIngrese el nombre de la persona %d o FIN: ", i);
        scanf("%s", col3);
        //Si se introduce FIN i = -2 (finalizando el while)
        if (strcmp(col3,"FIN")==0){
            i = -2;
        }
        //Se comparan los strings col3 (recien ingresado) con col4 (Palabra mas
        // "pequeña" entre las anteriores ingresadas) y en caso de ser col3 
        // mas pequeña col4 pasa a valer col3
        else{
            if (strcmp(col3,col4)<0){
                strcpy(col4,col3);
            }
        }
        i++;
    }
    //Se imprime la palabra mas "pequeña"
    printf("\n1er Persona alfabeticamente: %s", col4);
}
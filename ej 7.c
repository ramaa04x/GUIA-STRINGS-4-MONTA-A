#include <stdio.h>
//Se crea la variable PERSONA que contiene edad y nombre
typedef struct persona{
    int edad;
    char nombre[30];
} persona;

int main (){
    //Declaracion de las personas y variables
    persona personas[6];
    int col = 0;
    int col2 = 0;
    //Se le piden al usuario la edad y los nombres de las personas
    for (int i = 1; i < 6; i++){
        printf("\nIngrese el nombre de la persona %d: ", i);
        scanf("%s", personas[i].nombre);
        printf("Ingrese la edad de la persona %d: ", i);
        scanf("%d", &personas[i].edad);
    }
    
    //Se le asigna a los colectores los valores de la primer persona para evitar errores
    col = personas[1].edad;
    col2 = 1;
    
    //Se busca a la persona mas joven
    for (int i = 1; i < 6; i++){
        if (personas[i].edad < col){
            col = personas[i].edad;
            col2 = i;
        }
    }
    //Se imprime su nombre
    printf("Persona mas joven: %s", personas[(col2)].nombre);
}
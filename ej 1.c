#include <stdio.h>

int main()
{
    //Declaracion de variables
    char a[20];
    int col = 0;

    //Se le pide al usuario la palabra
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);

    //Se recorre el string sumando 1 a la variable colectora por cada letra
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        col++;
    }

    //Se imprime la cantidad de letras
    printf("\nCantidad de letras: %d", col);
    return 0;
}

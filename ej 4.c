#include <stdio.h>

int main()
{
    //Se declaran las variables
    char a[20] = {0};
    int cont = 0;
    
    //Se le pide al usuario la palabra
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    
    //Se recorre el string
    for (int i = 0; i<20; i++){
        //Si el codigo ASCII de la letra i es 97 (a minúscula), se suma 1 al contador
        //Cabe destacar que se puede agregar "|| a[i] == (codigo ASCII de la a minúsculas con tilde)"
        //Para contar las á minuscula con tilde. El ejercicio pedía la a minuscula y no sabia si agregarlo.
        if (a[i] == 97){
            cont++;
        }
    }
    //se imprime el contador
    printf("Cantidad de as minúsculas: %d", cont);
    return 0;
}
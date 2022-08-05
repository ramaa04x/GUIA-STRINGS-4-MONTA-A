#include <stdio.h>

int main()
{
    //Se declaran las variables
    char a[20] = {0};
    int cont1 = 0;
    int cont2 = 0;
    
    //Se le pide al usuario la palabra
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    
    //Se recorre el string
    for (int i = 0; i<20; i++){
        //Si la letra numero i coincide con el codigo ASCII de alguna vocal minúscula se suma uno al col1
        if (a[i] == 97 || a[i] == 101|| a[i] == 105|| a[i] == 111|| a[i] == 117){
            cont1++;
        }
        //Si la letra numero i coincide con el codigo ASCII de alguna vocal mayúscula se suma uno al col2
        else if (a[i] ==  65|| a[i] ==   69|| a[i] ==  73|| a[i] ==  79|| a[i] ==  85){
            cont2++;
        }
    }
    //Se imprimen los contadores
    printf("\nCantidad de vocales minúsculas: %d", cont1);
    printf("\nCantidad de vocales mayúsculas: %d", cont2);
    return 0;
}
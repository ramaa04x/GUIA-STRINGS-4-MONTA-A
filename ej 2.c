#include <stdio.h>

int main()
{
    //Declaracion de variables
    char a[20];
    char b;
    int len = 0;
    
    //Se le pide al usuario la palabra
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    
    //se calcula la longitud del string
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        len++;
    }
    
    //Se le resta 1 a la cantidad de letras ya que el string comienza en la letra numero 0
    len--;
    
    //Se recorre el string
    for(int i = 0; i <= (len/2); i++){
        //se almacena la letra numero i temporalmente
        b = a[i];
        //La letra numero i pasa a valer lo mismo que la letra numero len-i
        //Por ej. Si LEN = 10 la relacion (Len,i) seria (0,10) (1,9) (2,8) (3,9)...
        a[i] = a[len-i];
        //La letra numero len-i pasa a valer lo mismo que la letra numero i
        a[len-i] = b;
    }
    //Se imprimen la cantidad de letras y la palabra invertida.
    printf("\nCantidad de letras: %d", len+1);
    printf("\nInversa: %s", a);
    return 0;
}
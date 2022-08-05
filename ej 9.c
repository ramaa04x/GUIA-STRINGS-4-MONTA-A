#include <stdio.h>
#include <string.h>
int main (){
    //Declaracion de variable
    char arr[30] = {0};
    
    //Se le pide al usuario la palabra
    printf("Ingrese una palabra de hasta 20 letras en mayúsculas: ");
    scanf("%s", arr);
    
    //Se recorre el string
    for (int i = 0; i < strlen(arr); i++){
        //A cada letra se le suman 3 (en el codigo ASCII significa que esta
        //letra va a adelantar su posicion en el abecedario 3 posiciones)
        arr[i] = (arr[i] + 3);
        //En caso de superar 90 (Z mayúscula), se restan 26 volviendo
        //a la A mayúscula
        if (arr[i] + 3 > 90){
            arr[i] = arr[i] - 26;
        }
    }
    //Se imprime la palabra
    printf("\nPalabra encriptada: %s", arr);
}
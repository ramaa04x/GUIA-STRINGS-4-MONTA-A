#include <stdio.h>
int main()
{
    //Se declaran las variables
    char a[20] = {0};
    char b[20] = {0};
    int flag = 0;
    
    //Se le piden al usuario ambas palabras.
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    printf("Ingrese otra palabra de hasta 20 letras: ");
    scanf("%s", b);
    
    //Se recorre el string A, comparando letra por letra con el string B.
    //Si son diferentes la flag pasa a valer 1.
    for (int i = 0; i<20; i++){
        if (a[i] != b[i]){
            flag = 1;
        }
    }
    
    //Si la flag no cambio su valor inicial (0). Son iguales
    if (flag == 0){
        printf("Son iguales");
    }
    //Caso contrario son diferentes.
    else{
        printf("Son diferentes");
    }
    return 0;
}
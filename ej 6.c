#include <stdio.h>

int main()
{
    //Se declaran las variables
    char a[20] = {0};
    int arr[27] = {0};
    int col1 = 0;
    int col2 = 0;
    
    //Se le pide la palabra al usuario y se almacena en el string a
    printf("Ingrese una palabra de hasta 20 letras en mayúsculas: ");
    scanf("%s", a);
    
    //El string arr cuenta con 26 espacios y cada uno corresponde a 
    //su respectiva letra del abecedario. El abecedario mayúsculas ASCII empieza 
    //en el 65, por lo tanto restando 65 a la letra en cuestion se consigue 
    //su posicion en el abecedario y se suma uno a su posicion por cada vez que aparezca
    for (int i = 0; i<20; i++){
        arr[(a[i]-65)]++;
    }
    //Recorriendo el vector arr se busca cual es el valor mas alto (la letra mas repetida)
    for (int i = 0; i<26; i++){
        if (arr[i] > col1){
            col1 = arr[i];
            col2 = i+65;
        }
    }
    //Se imprime la letra mas repetida
    printf("\nLetra mas repetida: %c", col2);
    return 0;
}
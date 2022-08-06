#include <stdio.h>

#include <string.h>

int main (){

    char arr[100] = {0};

    printf("Ingrese el texto para ser encriptado (utilizar mayusculas): ");

    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++){

        arr[i] = (arr[i] + 3);

        if (arr[i] + 3 > 90){

            arr[i] = arr[i] - 26;

        }
    }

    printf("\n palabra en cesar : %s", arr);

}

// SARAGO //
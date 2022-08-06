#include <stdio.h>

int z;

int contador;

int main()

{

char palabra[21];

printf(" ingresa la palabra de 20 caracteres :\n");

scanf("%s",palabra);

printf("%s",palabra);

for (z=0;z<21;z++){

if (palabra[z]==97){

contador++;

}
    
}

printf("\n total de caracteres 'a':%d",contador);

}

// SARAGO //
#include <stdio.h>

int z;

int main()

{

char palabra[100];

printf("ingresa la palabra: \n");

scanf("%s",palabra);

printf("%s",palabra);

for (z=0;z<21;z++){

    if (palabra[z]==0)

    break;

}

printf(" total de caracteres %d \n",z);

}
// SARAGO //
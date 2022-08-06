

#include <stdio.h>

#include <string.h>

int main(void) {

    char texto1[25]; 

    char texto2[25];

    printf("Ingresa la primera palabra: ");  

    scanf("%s", texto1); 

    printf("Ingrese la segunda palabra: "); 

    scanf("%s", texto2); 

  if (strcmp(texto1, texto2) == 0) {    

    printf("Las cadenas son iguales ");  

  } else {

    printf("Las cadenas son distintas "); 
  
  }

  system("pause");
  
  return 0;
}
// SARAGO //
#include <stdio.h>

int main()
{
    char a[100] = {0};

    int arr[27] = {0};

    int col1 = 0;

    int col2=0;

    printf(" Ingresa una palabra en mayusculas: \n ");

    scanf("%s", a);
    
    for (int i = 0; i<100; i++){

arr[(a[i]-65)]++;

}
 for (int i = 0; i<26; i++){

 printf("\n%d", arr[i]);

 if (arr[i] > col1){

 col1 = arr[i];

col2 = i+65;
        }
    }
    printf(" Letra mas repetida: %c \n ", col2);

    return 0;
}

// SARAGO //
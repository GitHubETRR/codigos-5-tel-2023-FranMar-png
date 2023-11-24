#include <stdio.h>
#define MAX 50
int main()
{
    char text1[MAX];
    char text2[MAX];
    printf("Introduzca el primer texto: \n");
    gets(text1);
    printf("Introduzca el segundo texto: \n");
    gets(text2);
    //comparacion
    for(int i=0;i<MAX;i++){
        if(text1[i]!=text2[i]){
            printf("Los textos son diferentes.");
            return; 
        }
    }
    printf("Los textos son iguales.");
    return 0;
}


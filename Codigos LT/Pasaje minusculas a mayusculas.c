#include <stdio.h>
#define MAX 50
int main()
{
    char text1[MAX];
    printf("Introduzca el primer texto: \n");
    gets(text1);
    //Minus a Mayus
    for(int i=0;i<MAX;i++){
        if(text1[i]>=97 & text1[i]<=122){
            text1[i]=text1[i]-32;
        }
    }
    printf("%s",text1);
    return 0;
}
//entre 65 y 90 en decimal son las letras mayusculas
//entre 97 y 122 en decimal son las letras minusculas
//en decimal los valores en minuscula de las letras en ASCII es superior por 32 (A=65 a=97)
//si es minuscula le resto 32 para hacerlo mayuscula

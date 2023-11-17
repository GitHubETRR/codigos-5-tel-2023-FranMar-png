#include <stdio.h>
#include <stdint.h>
int multiplicador=1;
int tabla;
int terminar=1;
int valor=0;
int main()
{
    while(terminar!=0)
    {
    printf("Ingrese un numero para hacer su tabla \n");
    scanf("%d",&tabla);
    while(multiplicador<11)//hasta que multiplicador<11, en ese momento salir
    { 
    valor=tabla*multiplicador;
    printf("%d X %d = %d \n",tabla,multiplicador,valor);
    multiplicador++;
        
    }
    printf("¿Desea seguir? (0 para no)");
    scanf("%d",&terminar);
    multiplicador=1;
    }
    return 0;
}

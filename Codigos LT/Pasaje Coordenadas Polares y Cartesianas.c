#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    int tipo_coordenada;
    float modulo;
    float angulo;
    float Zx;
    float Zy;
    int terminar=0;
    
    do{
    system("clear");
    printf("Hola, bienvenido al programa que puede pasar coordenadas de polar a cartesiano y viceversa \n");
    printf("Porfavor ingrese que tipo de coordenada ingresara, polar (1) o cartesiana (0) \n");
    scanf("%d",&tipo_coordenada);
    if(tipo_coordenada==1){
        //si esta en polar
        printf("Porfavor ahora ingrese su modulo \n");
        scanf("%f",&modulo);
        printf("Ahora el angulo porfavor \n");
        scanf("%f",&angulo);
        Zx=modulo*cos(angulo*(180/PI));
        Zy=modulo*sin(angulo*(180/PI));
        printf("Su cordenada polar %f + e^ %f en cartesiano se ve de la siguiente forma: \n",modulo,angulo);
        printf("%f + J %f \n",Zx,Zy);
    }else{
        //si esta en cartesiana
        printf("Porfavor ahora ingrese su Zx \n");
        scanf("%f",&Zx);
        printf("Ahora el Zy porfavor \n");
        scanf("%f",&Zy);
        modulo=sqrt(pow(Zx,2)+pow(Zy,2));
        angulo=atan((Zy*(180/PI))/(Zx*(180/PI)));
        printf("Su cordenada polar %f + J %f en cartesiano se ve de la siguiente forma: \n",Zx,Zy);
        printf("%f + e^ %f \n",modulo,angulo);
    }
    printf("¿Desea volver a ingresar una coordenada? SI 1, o NO 0 \n");
    scanf("%d",&terminar);
    }while(terminar!=0);
    printf("Gracias por usar este programa :)");
    return 0;
}



#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    int terminar=0;
    int seleccion_operacion;
    int tipo_coordenada;
    float modulo;
    float angulo;
    float modulo1;
    float angulo1;
    float Zx;
    float Zy;
    
    
    system("clear");
    printf("Hola, bienvenido al programa que sirve para coordenadas polares y cartesianas \n");    
    do{
        printf("¿Usted desea sumar numeros complejos rectangulares o pasar coordenadas a una forma diferente? \n");
        printf("Si desea sumar coordenadas elija 1, si desea pasaje ponga 0 \n");
        scanf("%d",&seleccion_operacion);
        if(seleccion_operacion=1){
            printf("Acaba de seleccionar suma de numeros complejos \n");
            printf("Porfavor ingrese el modulo de su primer número \n");
            scanf("%f",&modulo);
            printf("Ahora ingrese el angulo de su primer número \n");
            scanf("%f",&angulo);
            printf("Ahora el modulo de su segundo número \n");
            scanf("%f",&modulo1);
            printf("Y por ultimo ingrese el angulo de su segundo número \n");
            scanf("%f",&angulo1);
            modulo+=modulo1;
            angulo+=angulo1;
            printf("Le gustaria ver su número de forma polar (1) o de forma cartesiana (0) \n");
            scanf("%d",tipo_coordenada);
            if(tipo_coordenada=1){
                printf("A decidido mostrarlo en forma polar \n"); 
                printf("Su angulo en forma polar es: \n");
                modulo=sqrt(pow(angulo,2)+pow(modulo,2));
                angulo=atan(angulo/modulo);
                printf("%f . e^J%f", modulo, angulo);
            }else{
                printf("A decidido mostrarlo en forma cartesiana \n"); 
                printf("Su angulo en forma cartesiana es: \n");
                printf("%f + J%f", modulo, angulo);
            }
        }else{
            printf("Acaba de seleccionar pasaje de coordenadas \n");
            printf("Porfavor ingrese que tipo de coordenada ingresara, polar (1) o cartesiana (0) \n");
            scanf("%d",&tipo_coordenada);
            if(tipo_coordenada=1){
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
                printf("Su cordenada cartesiana %f + J %f en polar se ve de la siguiente forma: \n",Zx,Zy);
                printf("%f + e^ %f \n",modulo,angulo);
            }
        }
        printf("¿Desea volver a ingresar una coordenada? SI 1, o NO 0 \n");
        scanf("%d",&terminar);
        system("clear");
    }while(terminar!=0);
    printf("Gracias por usar este programa :)");
    return 0;
}


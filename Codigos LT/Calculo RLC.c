#include <stdio.h>
#include <math.h>
#define PI 3.14
float impedanciaR;
float impedanciaI;
float frecuencia;
float capacitancia;
float inductancia;
int terminar=1;

//devuelve nombre (recibe);
void bienvenida();
float obtener_impedanciaR();
float obtener_impedanciaI();
float obtener_frecuencia();
float calculo_frecuencia(float);

float calculo_capacitancia(float,float);
void valor_resistencia_capacitor(float,float);

float calculo_inductancia(float,float);
void valor_resistencia_inductor(float,float);

void ninguna_impedancia();
int repetir(int);

void despedida();

int main()
{
    system("clear");
    bienvenida();
    do{
        impedanciaR=obtener_impedanciaR();
        impedanciaI=obtener_impedanciaI();
        frecuencia=obtener_frecuencia();
        frecuencia=calculo_frecuencia(frecuencia);
        if(impedanciaI<0){
            capacitancia=calculo_capacitancia(frecuencia,impedanciaI);
            valor_resistencia_capacitor(impedanciaR,capacitancia);
        }else{
            if(impedanciaI=0){
                inductancia=calculo_inductancia(frecuencia,impedanciaI);
                valor_resistencia_inductor(impedanciaR,inductancia);
            }else{
                ninguna_impedancia();
            }
        }
        terminar=repetir(terminar);
    }while(terminar!=0);
    despedida();
    return 0;
}

void bienvenida(){
    printf("Bienvenido al programa que calcula resistencias, inductores y cpacitores con su inductancia y frecuencia \n");
}
float obtener_impedanciaR(){
    float impedanciaR;
    printf("Por favor, ingrese su parte real de la impedancia \n");
    scanf("%f",&impedanciaR);
    return impedanciaR;
}
float obtener_impedanciaI(){
    float impedanciaI;
    printf("Ahora ingrese su parte imaginaria de la impedancia \n");
    scanf("%f",&impedanciaI);
    return impedanciaI;
}
float obtener_frecuencia(){
    float frecuencia;
    printf("Por ultimno ingrese su freceuncia \n");
    scanf("%f",&frecuencia);
    return frecuencia;
}
float calculo_frecuencia(float frecuencia){
    frecuencia=2*PI*frecuencia;
    return frecuencia;
}

float calculo_capacitancia(float frecuencia,float impedanciaI){
    float capacitancia;
    capacitancia=1/(frecuencia*impedanciaI);
    return capacitancia;
}
void valor_resistencia_capacitor(float impedanciaR,float capacitancia){
    printf("El valor de la resistencia es de %f, y el del capacitor %f \n",impedanciaR,capacitancia);
}

float calculo_inductancia(float frecuencia,float impedanciaI){
    float inductancia;
    inductancia=frecuencia*impedanciaI;
    return inductancia;
}
void valor_resistencia_inductor(float impedanciaR,float inductancia){
    printf("El valor de la resistencia es de %f, y el del inductor %f \n",impedanciaR,inductancia);
}

void ninguna_impedancia(){
    printf("Su frecuencia no tiene impedancia ni capacitancia \n");
}
int repetir(int terminar){
    printf("¿Desea volver a ingresar una impedancia? SI 1, o NO 0 \n");
    scanf("%d",&terminar);
    system("clear");
    return terminar;
}

void despedida(){
    printf("Gracias por usar este programa :)");
}




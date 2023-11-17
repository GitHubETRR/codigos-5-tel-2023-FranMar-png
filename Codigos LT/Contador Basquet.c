#include <stdio.h>

int puntos1;
int puntos2;
int puntos=1;
int equipo=1;
int simples;
int dobles;
int triples;
int tiros=1;
float porcens;
float porcend;
float porcent;

int main()

{

    do{
        
        printf("Puntaje %d - %d \n",puntos1,puntos2);
        
        //seleccion de equipos
        do{
            printf("Seleccione un equipo al cual sumarle punto (1 o 2), tambien si desea puede finalizar el partido con un 0 \n");
            scanf("%d",&equipo);
        }while((equipo!=0)&&(equipo!=1)&&(equipo!=2));
        
        //seleccion de puntaje
        switch(equipo){
            case 1:
            do{
                printf("¿Cuanto desea sumarle? (1, 2 o 3) \n");
                scanf("%d",&puntos);
            }while((puntos!=1)&&(puntos!=2)&&(puntos!=3));
            
            switch(puntos){
                case 1: simples++;
                break;
                case 2: dobles++;
                break;
                default: triples++;
                break;
            }
            puntos1=puntos1+puntos;
            break;
            
            case 2:
            do{
                printf("¿Cuanto desea sumarle? (1, 2 o 3) \n");
                scanf("%d",&puntos);
            }while((puntos!=1)&&(puntos!=2)&&(puntos!=3));
            
            switch(puntos){
                case 1: simples++;
                break;
                case 2: dobles++;
                break;
                default: triples++;
                break;
            }
            puntos2=puntos2+puntos;
            break;
        }
    }while(equipo!=0);
    
    if(tiros!=0){
        
        tiros=simples+dobles+triples;
        porcens=((float)simples/tiros)*100.0;
        porcend=((float)dobles/tiros)*100.0;
        porcent=((float)triples/tiros)*100.0;
        printf("Se hicieron %d simples \n",simples);
        printf("Se hicieron %d dobles \n",dobles);
        printf("Se hicieron %d triples \n",triples);
        if(puntos1>puntos2){
            printf("El equipo ganador fue el equipo 1, con el marcador en %d - %d \n Mientras que los porcentajes fueron: \n",puntos1,puntos2);
            printf("Simples: %f  \n Dobles: %f  \n Triples: %f ",porcens,porcend,porcent);
        }else if(puntos1<puntos2){
            printf("El equipo ganador fue el equipo 2, con el marcador en %d - %d \n Mientras que los porcentajes fueron: \n",puntos1,puntos2);
            printf("Simples: %f  \n Dobles: %f  \n Triples: %f ",porcens,porcend,porcent);
        }
        else{
            printf("Los equipos terminaron en empate");
        }
        
    }else{
        printf("Los equipos terminaron en empate 0 - 0");
    }
    
    return 0;
}



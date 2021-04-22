#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Compu
{
    int velocidad;
    int anio;
    char *tipo_procesador;
    int cantNucleos;
}Compu;

Compu *cargarPC(Compu *);
Compu *cargarArreglo(Compu *, int);
int main(){
    int cant;
    //printf("cantidad de Computadoras que desea cargar: ");
    //scanf("%d", &cant);
    Compu *PC=(Compu *)malloc(sizeof(Compu));
    PC = cargarPC(PC);
    printf("%s", PC->tipo_procesador);

    free(PC);
    getchar();
    return 0;
}


Compu *cargarPC(Compu * pc){
    srand(time(NULL));
    
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlo", "Core", "Pentium"};
    int numero_rand1= rand()%(7);
    pc->tipo_procesador= tipos[numero_rand1];

    pc->anio = rand()%(2017-2000+1)+2000;
    pc->cantNucleos= rand()% (4-1+1)+1;
    pc->velocidad= rand()% (3-1+1)+1;
    return pc;
}
Compu *cargarArreglo(Compu *PC, int cant){
    for(int i=0; i<=cant; i++){
        PC= cargarPC(PC);
        PC++;
    }
    return PC;
}
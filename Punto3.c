#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define filas 15

int main(){
    //numero aleatorio
    srand(time(NULL));
    int columnas= rand()% (15-5+1)+5;
    int pares=0;
    

    int *matriz= (int *)malloc(sizeof(int) *filas * columnas);
    printf("filas: %d - columnas: %d\n",filas, columnas);
    int *vec1= (int *)malloc(sizeof(int)*filas);
    
    for (int i = 0; i < filas; i++)
    {   pares=0;
        for (int j = 0; j < columnas; j++)
        {
            *(matriz+i *columnas+j)= rand() % (999-100+1)+100;
            if(*(matriz+i *columnas+j)%2==0){
                pares++;
            }
            printf("%d  ", *(matriz+i *columnas+j));
        }
        printf("cant pares: %d\n", pares);
        *(vec1+i)=pares;
    }
    free(matriz);
    printf("vectorPares=");
    for (int k = 0; k < filas; k++)
    {
        printf(" %d ",*(vec1+k));
    }
    free(vec1);
    getchar();
    return 0;
}

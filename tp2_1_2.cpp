#include<stdio.h>
#include <stdlib.h>
#define N 4
#define M 5
double mt[N][M];

int main(){
       

    for(int f = 0;f<N; f++){
        for(int c = 0;c<M; c++){
            
            printf("%.1lf ", *(mt+f*M+c));
        }
        printf("\n");
    }
    getchar();
    return 0;
}
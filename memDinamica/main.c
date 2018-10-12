#include <stdio.h>
#include <stdlib.h>
int inicializar(int* pBuffer,int limite,int parametro);
int imprimir(int* pBuffer,int limite);
int main()
{
    int* pArray;
    pArray = malloc(sizeof(int)*10);

    inicializar(pArray,10,12);
    imprimir(pArray,10);

    return 0;
}
int inicializar(int* pBuffer,int limite,int parametro){
    int i;
    int retorno=-1;
    if(pBuffer!=NULL && limite>0 ){
        retorno=0;
        for(i=0;i<limite;i++){
            *(pBuffer+i)=parametro+i;
        }
    }
    return retorno;
}
int imprimir(int* pBuffer,int limite){
    int i;
    int retorno=-1;
    if(pBuffer!=NULL && limite>0 ){
        retorno=0;
        for(i=0;i<limite;i++){
            printf("\n%d",*(pBuffer+i));
        }
    }
    return retorno;
}


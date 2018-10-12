#include <stdio.h>
#include <stdlib.h>
int* reasignar(int* pBuffer,int size);
int deleteArray(int* pBuffer);
int inicializar(int* pBuffer,int limite,int parametro);
int imprimir(int* pBuffer,int limite);
int* newArray(int size);
int main()
{
    int* pArray;
    int*auxArray;
    pArray = newArray(10);
    inicializar(pArray,10,12);
    imprimir(pArray,10);
    auxArray=reasignar(pArray,20);
    if(auxArray!=NULL){
        pArray=auxArray;
    }
    deleteArray(pArray);

    return 0;
}
int* newArray(int size){
    int* retorno=NULL;
    if(size>0 ){
        retorno = malloc(sizeof(int)*size);
    }
    return retorno;
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
int deleteArray(int* pBuffer){
    int retorno=-1;
    if(pBuffer!=NULL){
        retorno=0;
        free(pBuffer);
    }
    return retorno;
}
int* reasignar(int* pBuffer,int size){
    int* retorno=NULL;
    if(pBuffer!=NULL && size>0){
        retorno= realloc(pBuffer,sizeof(int)*size);
    }
   return retorno;
}

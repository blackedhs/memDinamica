#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "service.h"
#include "user.h"


int main(){
    Empleado* listaEmpleados[1000];
    Service* listaService[1000];
    User* listaUser[1000];
    int qtyEmpleados=0;
    int qtyService=0;
    int qtyUser=0;
    int i;
    char auxiliares[50];

    for(i=0;i<100;i++){
        sprintf(auxiliares,"juancito_%d",i);
        listaEmpleados[i]=empleado_newParametro(auxiliares,"Andrade",1.56);
        qtyEmpleados++;
    }
    for(i=0;i<qtyEmpleados;i++){
        empleado_print(listaEmpleados[i]);
    }
    for(i=0;i<100;i++){
        sprintf(auxiliares,"msj_%d",i);
        listaService[i]=ser_newParametros(100+i,auxiliares,i);
        qtyService++;
    }
     for(i=0;i<qtyService;i++){
        ser_print(listaService[i]);
    }

    for(i=0;i<100;i++){
        sprintf(auxiliares,"lala_%d",i);
        listaUser[i]=user_newParametro("negr@latengo",auxiliares,i);
        qtyUser++;
    }
     for(i=0;i<qtyUser;i++){
        user_print(listaUser[i]);
    }

    return 0;
}

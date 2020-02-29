#include <stdio.h>
#include <stdlib.h>
int main (){
int *arreglo, num, cont;
//Te pide valor del conjunto
printf("¿Cuantos elementos tiene el conjunto?\n");
scanf("%d",&num);
//Se usa "Malloc"
//Reserva espacio de memoria
arreglo = (int *)malloc (num * sizeof(int));
//Imprime los valores de datos guardagos en nuestro conjunto
if (arreglo!=NULL) {
printf("Vector reservado:\n\t[");
for (cont=0 ; cont<num ; cont++){
printf("\t%d",*(arreglo+cont));
}
printf("\t]\n");
printf("Se libera el espacio reservado.\n");
free(arreglo);
}
return 0;
}



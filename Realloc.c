#include <stdio.h>
#include <stdlib.h>
int main (){
int *arreglo, *arreglo2, num, cont;
//Te pide valor del conjunto
printf("¿Cuántos elementos tiene el conjunto?\n");
scanf("%d",&num);
//Se usa "Malloc"
arreglo = (int *)malloc (num * sizeof(int));
if (arreglo!=NULL) {
for (cont=0 ; cont < num ; cont++){
printf("Inserte el elemento %d del conjunto.\n",cont+1);
scanf("%d",(arreglo+cont));
}
printf("Vector insertado:\n\t[");
for (cont=0 ; cont < num ; cont++){
printf("\t%d",*(arreglo+cont));
}
printf("\t]\n");
printf("Aumentando el tamaño del conjunto al doble.\n");
num *= 2;
//Se usa la funcion realloc
//Aumenta el tamaño de memoria reservada
arreglo2 = (int *)realloc (arreglo,num*sizeof(int));
if (arreglo2 != NULL) {
arreglo = arreglo2;
//Ingresas nuevos valors a nuestra nueva dimencion de memoria
for (; cont < num ; cont++){
printf("Inserte el elemento %d del conjunto.\n",cont+1);
scanf("%d",(arreglo2+cont));
}
printf("Vector insertado:\n\t[");
for (cont=0 ; cont < num ; cont++){
printf("\t%d",*(arreglo2+cont));
}
printf("\t]\n");
}
free (arreglo);
}
return 0;
}

/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include <CarpetaInterna/vector.h>

int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];
int w[2];

int main() 
{
    vector v1,v2,vfinalsuma,vfinalmult;

printf("===============Taller #4===============\n\n");

    printf("******************\n"); 
    printf("* Primera Parte: *\n");
    printf("******************\n"); 
    addvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
    multvec(x, y, w, 2);
    printf("w = [%d %d]\n", w[0], w[1]);

    printf("\n\n");

    printf("******************\n");
    printf("* Segunda Parte: *\n");
    printf("******************\n");
    printf("Ingrese los valores x, y para el vector1 y para el vector2: \n");
    printf("Para el vector1:\n");
    scanf("%d",&v1.a[0]);
    scanf("%d",&v1.a[1]);
    printf("Para el vector2:\n");
    scanf("%d",&v2.a[0]); 
    scanf("%d",&v2.a[1]); 
    addvec(v1.a,v2.a,vfinalsuma.a,2);
    printf("\nVector resultado de sumar el vector1 y el vector2 es igual a [%d %d]\n", vfinalsuma.a[0], vfinalsuma.a[1]);
    multvec(v1.a,v2.a,vfinalmult.a,2);
    printf("Vector resultado de multiplicar el vector1 y el vector2 es igual a [%d %d]\n\n", vfinalmult.a[0], vfinalmult.a[1]);    






    return 0;
}
/* $end main2 */

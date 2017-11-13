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
    addvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
    multvec(x, y, w, 2);
    printf("w = [%d %d]\n", w[0], w[1]);
    return 0;
}
/* $end main2 */

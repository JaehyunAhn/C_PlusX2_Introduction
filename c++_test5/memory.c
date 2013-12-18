#include <stdio.h>

int main ()
{
    int i;
    double data1[1000]; // normal way
    double data2[1000]; // pointer indexing
    double data3[1000]; // optimized way

    /* normal loop */
    for(i=0; i<1000; i++)
        data1[i] = 1.0;

    /* pointer indexing */
    double *copy, *end;
    end = data2+1000;
    for( copy = data2; copy < end; copy++)
        *copy = 1.0;

    /* optimized way */
    end = data3+1000;
    for( copy = data3; copy < end; *(copy++)=1.0 );

    /* result phase */
    printf("%g %g %g\n",data1[10],data2[15],data3[20]);
    return 0;
}

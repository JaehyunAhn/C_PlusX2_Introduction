#ifndef stdio_h // if there is no stido.h
#include "ptr.h"
#define times(n) 10*n // define macro
#endif

int main ()
{
#ifdef times // macro don't need full parameter
    int i;
    for(i=0; i<times(1); i++)
        printf("defintion works!\n");
#endif
    return 0;
}

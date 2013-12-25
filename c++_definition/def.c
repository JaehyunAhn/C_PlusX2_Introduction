#ifndef stdio_h // file stdio.h 
#include <stdio.h>
#define times 5
#endif

int main()
{
#ifdef times
    int i;
    for( i = 0; i < times; i++)
        printf("definition works!\n");
#endif
    return 0;
}

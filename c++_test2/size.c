#include <stdio.h>

typedef struct mixed
{
    int a;
    char b;
    long c;
} newtype;

int main (int argc, char *argv[])
{
    int integer = (int)sizeof(int);
    int character = (int)sizeof(char);
    int longtype = (int)sizeof(long);
    int voidtype = (int)sizeof(void);

    newtype type;
    int size = (int)sizeof(type);

    printf("%d %d %d %d %d\n",integer,character,longtype,voidtype, size);

    return 0;
}

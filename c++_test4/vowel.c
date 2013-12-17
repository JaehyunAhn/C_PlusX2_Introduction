#include <stdio.h>

int main (int argc, char *argv[])
{
    if(argc == 1)
        return 0;
    int i, vowel = 0;
    for(i=1; i<argc; i++)
    {
        switch(argv[i][0])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowel++;
                break;
        }
    }
    printf("Number of vowels: %d\n",vowel);
    return 0;
}

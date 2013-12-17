#include <stdio.h>
#include <string.h>

void swap (char data[5][255], int i, int j) {
    char temp[255];
    strcpy(temp,data[i]);
    strcpy(data[i],data[j]);
    strcpy(data[j],temp);
}

void sort (char data[5][255], int n) {
    // * : first address contact
    int i, j;
    for(i = 0; i < n-1; i++)
        for( j = i+1; j > 0; j--)
            if(strcmp(data[j-1],data[j])>0)
            {
                printf("%s",data[j-1]);
                swap(data, j-1, j);
            }
}

int main() {
    char strings[5][255];
    char comp[255];
    int i, n;
    n = sizeof(strings)/sizeof(comp);
    printf("Enter 5 strings, max 255 chars each:\n");
    for(i=0; i < n; i++)
        scanf("%s",strings[i]);
    sort(strings, n);
    printf("Sorted data:\n");
    for(i=0; i < n-1; i++)
        printf("%s, ",strings[i]);
    printf("%s.\n",strings[i]);
    return 0;
}

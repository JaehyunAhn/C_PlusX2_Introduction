#include <stdio.h>
#include <string.h>

char strings[10][255]; // 10 strings of up to 255 chars each

void swap(int data[], int i, int j) {
    int temp;
    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void sort (int data[], int n) { // bubble sort
    int i, j;
    for( i=0; i<n-1; i++)
        for( j=i+1; j>0; j--)
            if (data[j-1] > data[j])
                swap(data, j-1, j);
}

int main() {
    int sort_data[10],
        i, n;
    n = sizeof(sort_data)/sizeof(int);
    printf("Enter %d integers to sort:\n",n);
    for (i=0; i<n; i++)
        scanf("%d", &sort_data[i]);
    sort(sort_data, n);
    printf("Sorted data:\n");
    for(i=0; i<n; i++)
        printf("%d ",sort_data[i]);
    printf(".\n");
    return 0;
}

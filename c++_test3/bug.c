#include <stdio.h>

/* bug should check if s is zero */
int sign (int s)
{
    if(s == 0)
        return 0;
    return abs(s)/s;
}

int main ()
{
    int data [10], 
        i, 
        n, 
        negatives, 
        zeros, 
        positives;

    n = sizeof(data) / sizeof(int);
    negatives = zeros = positives = 0;
    printf("Enter %d numbers : ", n);
    /* need loop on i from 0 to n-1 around this */
    for (i=0; i<n; i++)
    {
        // read in the data
        scanf("%d",&data[i]);
        // now count negatives, zeros, positives
        switch(sign(data[i]))
        {
            case 0:
                zeros++;
                break;
            case -1:
                negatives++;
                break;
            default:
                positives++;
        }
    }
    printf("negatives=%d, zeros=%d, positives=%d\n",
            negatives, zeros, positives);

    return 0;
}

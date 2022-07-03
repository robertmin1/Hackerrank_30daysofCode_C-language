#include <stdio.h>

int main()
{
    int N;
    int i;

    scanf("%d", &N);
    int A[N];
   // printf("Number of arrays:%d\n", N);
    i = 0;
    
    while (i<N)
    {
        scanf("%d\n", &A[i]);
        //printf("%d", A[i]);
        i++;
    }
    i = N - 1;
    while (i>=0)
    {
        printf("%d ", A[i]);
        i--;
    }
    
    
    

}

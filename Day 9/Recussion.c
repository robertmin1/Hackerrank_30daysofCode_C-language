#include <stdio.h>

float factorial(float n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }    
}

int main()
{
    float n;
   // printf("Input your value: ");
    scanf("%f", &n);
    factorial(n);
    printf("%.0f",factorial(n));
}

#include <stdio.h>
int main()
{
    int i;
    int n;
    int d;
 
    scanf("%d",&n);
    for (i = 1; i <= 10; i++)
{
    d = n*i;
    printf("%d x %d = %d\n", n, i, d);
}

}

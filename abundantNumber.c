#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum > n)
        printf("%d is an abundant number", n);
    else
        printf("%d is not an abundant number", n);
}
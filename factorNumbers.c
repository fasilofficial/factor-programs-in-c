#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d, ", i);
    }
}
#include <stdio.h>
void main()
{
    int n, fact = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            if (i * (i + 1) == n)
                fact = i;
    }
    if (fact != 0)
        printf("%d is a pronic number", n);
    else
        printf("%d is not a pronic number", n);
}
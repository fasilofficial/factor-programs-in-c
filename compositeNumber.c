#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count > 3)
        printf("%d is a composite number", n);
    else
        printf("%d is not a composite number", n);
}
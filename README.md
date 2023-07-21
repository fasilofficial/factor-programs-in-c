# factor-programs-in-c
Collection of multiple factor programs in C language

1. Print Factor Numbers
```
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
```
```
Enter a number: 8
Factors of 8 are
1, 2, 4, 8,
```

2. Prime Number
```
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
    if (count == 2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}
```
```
Enter a number: 5
5 is a prime number
```

3. Composite Number
```
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
```
```
Enter a number: 8
8 is a composite number
```

4. Perfect Number
```
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
    if (sum == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);
}
```
```
Enter a number: 6
6 is a perfect number
```

5. Abundant Number
```
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
```
```
Enter a number: 12
12 is an abundant number
```

6. Deficient Number
```
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
    if (sum < n)
        printf("%d is a deficient number", n);
    else
        printf("%d is not a deficient number", n);
}
```
```
Enter a number: 21
21 is a deficient number
```

7. Pronic Number
```
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
```
```
Enter a number: 56
56 is a pronic number
```


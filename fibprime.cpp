#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n, i, position = 2, primeNumber[10], init = 2, count = 0;
    printf("Input N= ");
    scanf("%d", &n);

    printf("Fibonacci List: %d %d ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        printf("%d ", nextTerm);
        primeNumber[position] = nextTerm;
        position++;
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\nPrime numbers are ");
    position = 3;
    i = 1;
    init = 0;
    for (init = 1; init <= 7; init++)
    {
        for (i = 1; i <= primeNumber[position]; i++)
        {
            if (primeNumber[position] % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", primeNumber[position]);
        }
        count = 0;
        position++;
    }
    return 0;
}

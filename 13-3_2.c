#include <stdio.h>

int main()
{
    int a, b;
    int q, r;
    int tmp;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        tmp = a;
        a = b;
        b = a;
    }

    while (1)
    {
        r = a % b;
        if (r == 0)
        {
            break;
        }
        a = b;
        b = r;
    }

    printf("%d", b);

    return (0);
}

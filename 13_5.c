/*
특정한 수 N 을 입력받아서 N 을 소인수분해한 결과가 출력되게 해보세요
*/
#include <stdio.h>

void factorize(int n)
{
    int a = 2;

    while (1)
    {
        if (n % a == 0)
        {
            n /= a;
            if (n == 1)
            {
                printf("%d", a);
                break;
            }
            printf("%d X ", a);
            continue;
        }
        a++;
    }
}

int main()
{
    int n;

    scanf("%d",&n);

    factorize(n);

    return (0);
}

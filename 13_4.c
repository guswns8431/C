/*
값을 입력 받아서 1 부터 N 까지의 소수의 개수를 출력하는 함수를 제작해보세요.
*/
#include <stdio.h>

int getPrime(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            continue;
        }
        else if (i == 2)
        {
            count++;
        }
        else
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                if (j == i - 1)
                {
                    count++;
                }
            }
        }
    }

    return count;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", getPrime(n));

    return 0;
}

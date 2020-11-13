/*
임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라. 예를 들어서 N = 18 일 경우

N = 18 18 = 2 * 3 * 3
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int tmp;

    scanf("%d", &n);

    tmp = n;
    printf("%d = ", n);
    for (int i = 2; i < sqrt(n); i++)
    {
        if (tmp % i == 0)
        {
            tmp /= i;
            printf("%d ", i);
            if (tmp != 1)
            {
                printf("* ");
            }
            i--;
        }
    }

    return (0);
}

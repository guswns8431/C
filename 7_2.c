/*
N 줄인 역삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다.
*/
#include <stdio.h>

int main()
{
    int n;
    int star, space;

    scanf("%d", &n);
    star = n + (n - 1);
    space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star -= 2;

        printf("\n");
    }

    return 0;
}

/*
N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다.
*/
#include <stdio.h>

int main()
{
    int n;
    int space;
    int star;

    scanf("%d", &n);
    space = n - 1;
    star = n;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 0 ; j < space ; j++)
        {
            printf(" ");
        }
        space--;

        for(int j = 0 ; j < 1+(i-1)*2 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

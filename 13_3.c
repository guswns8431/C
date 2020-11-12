/*
1 부터 n 까지의 합을 구하는 함수를 작성해보세요.
수학적인 공식을 써도 되지만 for 문으로 작성하는 것이 연습 하는데에는 도움이 될듯 합니다.
*/
#include <stdio.h>

int sumNum(int n)
{
    int sum = 0;

    for(int i = 1 ; i <= n ; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d",sumNum(n));

    return (0);
}

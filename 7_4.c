/*
1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
*/
#include <stdio.h>

int fibo(n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int sum = 0;
    int i = 1;

    while(1)
    {
        if(i % 2 == 0)
        {
            sum += fibo(i);
        }
        i++;
        if(fibo(i) > 1000000)
        {
            break;
        }
    }

    printf("%d",sum);
    
    return 0;
}

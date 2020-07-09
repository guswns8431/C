/*
1~1000까지 소수 찾기
*/
#include <stdio.h>

int main()
{
    int prime[1000];
    int index = 3;
    int add = 3;
    int guess = 8;
    int check = 0;

    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;

    for(int i = guess; i < 1000 ; i++)
    {
        for(int j = 0 ; j <= index ; j++)
        {
            if(i % prime[j] != 0)
            {
                check++;
            }
            else
            {
                break;
            }
        }
        if(check == add+1)
        {
            add++;
            prime[add] = i;
            printf("%d\n",i);
            index = add;
        }
        check = 0;
    }

    return 0;
}

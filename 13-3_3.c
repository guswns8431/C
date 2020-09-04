#include <stdio.h>

int mul(int input)
{
    if(input == 1)
    {
        return 1;
    }
    return input * mul(input-1);
}

int main()
{
    int a;

    scanf("%d",&a);

    printf("%d",mul(a));

    return 0;
}

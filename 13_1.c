/*
이 강좌 최상단에서 이야기 했던 마술 상자를 함수로 제작해보세요
*/
#include <stdio.h>

int function(int x)
{
    return x + 4;
}

int main()
{
    int x;

    scanf("%d",&x);

    printf("%d",function(x));

    return 0;
}

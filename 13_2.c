/*
어느날 귀족이 돈벌이가 시원치 않아져서 이전에는 일정하게 10000 달러씩 챙겼지만 이제 일정치 않은 수입을 얻게 되었습니다.
여러분은 slave 함수를 인자를 2 개를 가져서, 하나는 현재 귀족의 재산, 다른 하나는 오늘 귀족의 수입을 인자로 전달받는 새로운 함수를 만들어 보세요 
*/
#include <stdio.h>

void slave(int currentMoney,int income)
{
    printf("현재 돈 : %d\n",currentMoney + income);
    printf("수입 : %d\n",income);
}

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    slave(a,b);

    return 0;
}

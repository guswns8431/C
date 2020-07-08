/*
입력받은 학생들의 성적을 막대 그래프로 나타내는 프로그램을 만들어 보세요.
*/
#include <stdio.h>

int main()
{
    int score[10];

    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&score[i]);
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d번째 학생 : ",i+1);
        for(int j =0 ; j < score[i] ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

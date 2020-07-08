/*
입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램을 만들어 보세요.
*/
#include <stdio.h>

int main()
{
    int score[10];
    int tmp;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (score[i] < score[j])
            {
                tmp = score[j];
                score[j] = score[i];
                score[i] = tmp;
            }
        }
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d ",score[i]);
    }

    return 0;
}

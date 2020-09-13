#include <stdio.h>

int getPosition(char *input1, char *input2)
{
    int i = 0, j = 0;
    int position = 0;

    while (input1[i])
    {
        if (input1[i] == input2[j])
        {
            j = 0;
            position = i;
            while (input2[j])
            {
                if (input1[i] == input2[j])
                {
                    i++;
                    j++;
                    if (!input2[j])
                    {
                        printf("찾는 문자열의 위치 : %d\n", position + 1);
                        return 0;
                    }
                    continue;
                }
                else
                {
                    i = position; // 원래 탐색을 하던 index로 돌아감
                    break;
                }
            }
        }

        i++;
        if (!input1[i])
        {
            printf("문자의 위치를 찾을 수 없습니다\n");
        }
    }
    return 0;
}

int main()
{
    char input1[100], input2[100];

    printf("문자열을 입력하세요 : ");
    scanf("%s", input1);
    printf("위치를 알고 싶은 문자열을 입력하세요 : ");
    scanf("%s", input2);

    getPosition(input1,input2);

    return 0;
}

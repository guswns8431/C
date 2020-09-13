#include <stdio.h>

int comparteStr(char *input1,char *input2)
{
    int i = 0;
    while (input1[i])
    {
        if(input1[i] != input2[i])
        {
            printf("다르다\n");
            return 0;
        }
        i++;
        if(!input1[i])
        {
            printf("같다\n");
            return 0;
        }
    }
    return 0;
}

int main()
{
    char a[100],b[100];

    printf("대 개의 문자열을 입력 받아서 비교하는 프로그램입니다.\n");
    printf("첫 번째 문자열 : ");
    scanf("%s",a);
    printf("두 번째 문자열 : ");
    scanf("%s",b);

    comparteStr(a,b);

    return 0;
}

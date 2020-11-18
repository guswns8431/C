#include <stdio.h>

int compareStr(char *input1,char *input2)
{
    int i = 0;
    while (input1[i])
    {
        if(input1[i] == input2[i])
        {
            i++;
            if(input1[i]=='\0')
            {
                printf("두 문자열은 동일합니다");
                return 0;
            }
            continue;
        }
        else
        {
            printf("두 문자열은 동일하지 않습니다\n");
            return 0;
        }
        
    }
    return 0;
}

int main()
{
    char a[30],b[30];

    printf("첫번째 문자열 입력\n");
    scanf("%s",a);
    printf("두번째 문자열 입력\n");
    scanf("%s",b);

    compareStr(a,b);

    return (0);
}

#include <stdio.h>

void convertLetter(char *str)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] >= 'a')
        {
            str[i] -= 32;
        }
        else
        {
            str[i] += 32;
        }
        i++;
    }
    
}

int main()
{
    char input[100];
    int i = 0;

    printf("길이가 최대 100인 문자열을 입력 받아서 소문자는 대문자로, 대문자는 소문자로 출력하는 프로그램입니다.\n");

    scanf("%s",input);

    convertLetter(input);

    while (input[i])
    {
        printf("%c",input[i]);
        i++;
    }

    return 0;
}

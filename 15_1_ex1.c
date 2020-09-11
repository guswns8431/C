#include <stdio.h>

int main()
{
    char input[30];
    int count = 0;

    scanf("%s",input);

    for(int i = 0 ; i < 30 ; i++)
    {
        if(input[i] == '\0')
        {
            break;
        }
        count++;
    }
    
    printf("%d",count);

    return 0;
}

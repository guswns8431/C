#include <stdio.h>

void getLength(char *input,int *len)
{
    while (input[*len])
    {
        *len+=1;
    }
}

void printReverse(char *input,int last)
{
    for(int i = last ; i >= 0 ; i--)
    {
        printf("%c",input[i]);
    }
    
}

int main()
{
    int len = 0;
    char str[100];

    scanf("%s",str);

    getLength(str,&len);
    printReverse(str,len);

    return 0;
}

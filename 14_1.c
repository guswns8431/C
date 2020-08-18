/*
14_1
10개의 원소들 중 최대값 구하는 함수를 이용하여,
10개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수를 만들어보세요
*/
#include <stdio.h>

int sort(int *arr)
{
    int temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return 0;
}

int main()
{
    int input[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input[i]);
    }

    sort(input);

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d ", input[i]);
    }

    return 0;
}

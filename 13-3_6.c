#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int *result;

    arr = (int *)malloc(sizeof(int) * 4);
    result = (int *)malloc(sizeof(int) * 4);

    result[0] = 2;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 3; i <= n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (arr[i] / result[j] != 0)
            {
                if (j == n / 2)
                {
                    result[n / 2] = arr[i];
                }
                continue;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

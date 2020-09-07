#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int *result;
    int insertPoint = 1;

    arr = (int *)malloc(sizeof(int) * 100);
    result = (int *)malloc(sizeof(int) * 100);

    result[0] = 2;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 3; i <= n; i++)
    {
        for (int j = 0; j < insertPoint; j++)
        {
            if (arr[i] % result[j] != 0)
            {
                if (j == insertPoint - 1)
                {
                    result[insertPoint] = i;
                    insertPoint++;
                    break;
                }
                continue;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < insertPoint ; i++)
    {
        printf("%d ", result[i]);
    }

    free(arr);
    free(result);

    return 0;
}

#include <stdio.h>
#define student 5
#define subject 3

void swap(int average[], int i, int j)
{
    int temp;
    temp = average[i];
    average[i] = average[j];
    average[j] = temp;
}

void getTotalAverage(int average[], int *total)
{
    for (int i = 0; i < student; i++)
    {
        *total += average[i];
    }

    *total /= student;
}

void printPorF(int average[], int *totalAverage)
{
    for (int i = 0; i < student; i++)
    {
        if (average[i] >= *totalAverage)
        {
            printf("%d점 학생 합격\n", average[i]);
        }
        else
        {
            printf("%d점 학생 불합격\n", average[i]);
        }
    }
}

int main()
{
    int score[student][subject];
    int average[student];
    int totalAverage;

    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            scanf("%d", &score[i][j]);
            average[i] += score[i][j] / 3;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (average[i] < average[j])
            {
                swap(average, i, j);
            }
        }
    }

    for (int i = 0; i < student; i++)
    {
        printf("%d점 ", average[i]);
    }
    printf("\n");

    getTotalAverage(average, &totalAverage);

    printPorF(average, &totalAverage);

    return (0);
}

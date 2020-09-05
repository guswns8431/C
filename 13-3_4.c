#include <stdio.h>

void printMenu()
{
    printf("원하는 연산의 숫자를 입력하시면 됩니다\n");
    printf("--------------------------------------\n");
    printf("1 덧셈\n2 뺄셈\n3 곱셈\n4 나눗셈\n5 리셋\n6 방금 연산 취소\n7 프로그램 종료\n");
}

void plus(float *num,float *tmp)
{
    float input;

    scanf("%f",&input);

    *num += input;
    *tmp = *num;

    printf("%f\n",*num);
}

void minus(float *num,float *tmp)
{
    float input;

    scanf("%f",&input);

    *num -= input;
    *tmp = *num;

    printf("%f\n",*num);
}

void mul(float *num,float *tmp)
{
    float input;

    scanf("%f",&input);

    *num *= input;
    *tmp = *num;

    printf("%f\n",*num);
}

void div(float *num,float *tmp)
{
    float input;

    scanf("%f",&input);

    *num /= input;
    *tmp = *num;

    printf("%f\n",*num);
}

void reset(float *num)
{
    *num = 0;

    printf("%f\n",*num);
}

void redo(float *num,float *tmp)
{
    *num = *tmp;

    printf("%f\n",*num);
}

int main()
{
    float num;
    int choice;
    float tmp; //실행취소하기 위해 임시로 저장하는 숫자

    scanf("%f", &num);

    while (1)
    {
        printMenu();
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            plus(&num,&tmp);
            break;
        
        case 2:
            minus(&num,&tmp);
            break;
        
        case 3:
            mul(&num,&tmp);
            break;

        case 4:
            div(&num,&tmp);
            break;
        
        case 5:
            reset(&num);
            break;
        
        case 6:
            redo(&num,&tmp);
            break;
        
        case 7:
            printf("프로그램을 종료합니다");
            return 0;
        
        default:
            printf("없는 기능을 선택하셨습니다\n");
            break;
        }
    }

    return 0;
}

/*
다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라
  i) a + b + c = 2000
  ii) a ＞ b > c, a,b,c 는 모두 자연수
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    int count = 0;

    for (c = 1; c < 1996; c++)
    {
        for (b = c + 1; b <= 2000 - c; b++)
        {
            if (b + c >= 2000)
            {
                break;
            }
            for (a = b + 1; a <= 2000 - c - b; a++)
            {
                if (a + b + c > 2000)
                {
                    break;
                }
                if (a + b + c == 2000)
                {
                    count++;
                }
            }
        }
    }

    printf("%d", count);

    return (0);
}

#include <stdio.h>
#include <string.h>

void Homolize(int);

int main()
{
    int tar;
    scanf("%d", &tar);
    Homolize(tar);
}

void Homolize(int tar)
{
    char homo[11][16] = 
    {
        "-1-1+4-5-1+4",
        "-1*1+4-5-1+4",
        "-1-1+4+5-1-4",
        "1*1+4-5-1+4",
        "1-1+4+5-1-4",
        "1-1-4+5+1*4",
        "1+1+4+5-1-4",
        "1+1-4+5+1*4",
        "1+1+4+5+1-4",
        "-1-1-4-5*(1-4)",
        "-1-1+4+5-1+4"
    };
    int digit[10];
    for (int i = 0; i < 10; i += 1)
    {
        digit[i] = tar % 10;
        tar /= 10;
    }
    for (int i = 0; i < 10; i += 1)
    {
        if (digit[i] != 0)
        {
            if (i == 0)
                printf("(%s)", homo[digit[i]]);
            else 
                printf("(%s)*(%s)^(%s)", homo[digit[i]], homo[10], homo[i]);
            printf("+");
        }
    }
}
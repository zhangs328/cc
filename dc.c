/*
 * dc.c — 奇偶判断
 */

#include <stdio.h>

int main()
{
    int a;

    printf("请输入一个整数：");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d 是偶数\n", a);
    }
    else
    {
        printf("%d 是奇数\n", a);
    }

    return 0;
}

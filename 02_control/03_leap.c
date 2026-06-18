/*
 * 03_leap.c — 判断闰年
 *
 * 📌 说明：输入年份，判断是否为闰年
 * - 闰年规则：能被4整除但不能被100整除，或能被400整除
 * - 学习逻辑与 &&、逻辑或 ||
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    int year;

    printf("请输入年份：");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d 年是闰年，有 366 天\n", year);
    }
    else
    {
        printf("%d 年不是闰年，有 365 天\n", year);
    }

    return 0;
}

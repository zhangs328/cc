/*
 * 01_odd_even.c — 奇偶判断
 *
 * 📌 说明：输入一个整数，判断它是奇数还是偶数
 * - 学习 if-else 基本用法
 * - 除 2 取余判断奇偶
 *
 * 🏆 难度：⭐
 */

#include <stdio.h>

int main()
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d 是偶数\n", num);
    }
    else
    {
        printf("%d 是奇数\n", num);
    }

    return 0;
}

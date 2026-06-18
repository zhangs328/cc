/*
 * 09_gcd.c — 最大公约数
 *
 * 📌 说明：输入两个正整数，求最大公约数
 * - 辗转相除法（欧几里得算法）
 * - 学习 while 循环的经典应用
 *
 * 🏆 难度：⭐⭐⭐
 */

#include <stdio.h>

int main()
{
    int a, b, x, y, temp;

    printf("请输入两个正整数（用空格隔开）：");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // 辗转相除法
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("%d 和 %d 的最大公约数是：%d\n", a, b, x);

    // 拓展：最小公倍数 = 两数之积 / 最大公约数
    printf("最小公倍数是：%d\n", a * b / x);

    return 0;
}

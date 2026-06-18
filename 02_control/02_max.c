/*
 * 02_max.c — 三个数比大小
 *
 * 📌 说明：输入三个整数，找出最大值和最小值
 * - 学习嵌套 if 和逻辑运算符
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    int a, b, c, max, min;

    printf("请输入三个整数（用空格隔开）：");
    scanf("%d %d %d", &a, &b, &c);

    // 找最大值
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    // 找最小值
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    printf("最大值: %d\n", max);
    printf("最小值: %d\n", min);

    return 0;
}

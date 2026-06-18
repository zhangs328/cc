/*
 * 03_add.c — 两个数相加
 *
 * 📌 说明：从键盘输入两个整数，计算和
 * - 学习 scanf 读取输入
 * - 注意 scanf 的 & 取地址符号
 *
 * 🏆 难度：⭐
 */

#include <stdio.h>

int main()
{
    int a, b, sum;

    // 输入两个整数
    printf("请输入两个整数（用空格隔开）：");
    scanf("%d %d", &a, &b);

    // 计算和
    sum = a + b;

    // 输出结果
    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}

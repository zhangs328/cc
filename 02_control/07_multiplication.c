/*
 * 07_multiplication.c — 九九乘法表
 *
 * 📌 说明：输出 9×9 乘法表
 * - 学习 for 循环嵌套
 * - 注意格式化对齐
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    printf("===== 九九乘法表 =====\n\n");

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d×%d=%-2d  ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}

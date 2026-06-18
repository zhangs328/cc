/*
 * 08_narcissus.c — 水仙花数
 *
 * 📌 说明：输出所有三位数的水仙花数
 *   水仙花数 = 各位数字的立方和等于本身
 *   如 153 = 1³ + 5³ + 3³
 * - 练习 for 循环 + 数字分离
 *
 * 🏆 难度：⭐⭐⭐
 */

#include <stdio.h>

int main()
{
    int hundreds, tens, units;

    printf("三位数中的水仙花数有：\n");

    for (int i = 100; i <= 999; i++)
    {
        hundreds = i / 100;
        tens = (i / 10) % 10;
        units = i % 10;

        if (hundreds * hundreds * hundreds +
            tens * tens * tens +
            units * units * units == i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

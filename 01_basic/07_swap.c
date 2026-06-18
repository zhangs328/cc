/*
 * 07_swap.c — 交换两个数
 *
 * 📌 说明：输入两个数，交换它们的值
 * - 学习临时变量的使用
 * - 理解赋值语句的执行顺序
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("请输入两个整数（用空格隔开）：");
    scanf("%d %d", &a, &b);

    printf("交换前：a = %d, b = %d\n", a, b);

    // 交换
    temp = a;   // 把 a 的值暂存到 temp
    a = b;      // 把 b 的值赋给 a
    b = temp;   // 把 temp（原 a 的值）赋给 b

    printf("交换后：a = %d, b = %d\n", a, b);

    return 0;
}

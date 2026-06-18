/*
 * 06_circle.c — 圆的面积和周长
 *
 * 📌 说明：输入半径，计算圆的面积和周长
 * - 学习 #define 定义常量
 * - 浮点数运算
 *
 * 🏆 难度：⭐
 */

#include <stdio.h>

#define PI 3.14159

int main()
{
    float r, area, perimeter;

    // 输入半径
    printf("请输入圆的半径：");
    scanf("%f", &r);

    // 计算面积 = πr²，周长 = 2πr
    area = PI * r * r;
    perimeter = 2 * PI * r;

    // 输出结果
    printf("半径: %.2f\n", r);
    printf("面积: %.2f\n", area);
    printf("周长: %.2f\n", perimeter);

    return 0;
}

/*
 * 05_temperature.c — 温度转换
 *
 * 📌 说明：摄氏温度转华氏温度
 * - 公式：F = C × 9/5 + 32
 * - 学习浮点数运算和类型转换
 *
 * 🏆 难度：⭐
 */

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // 输入摄氏温度
    printf("请输入摄氏温度（℃）：");
    scanf("%f", &celsius);

    // 转换为华氏温度
    // 注意：9/5 在整数运算中结果是 1，要写成 9.0/5.0
    fahrenheit = celsius * 9.0 / 5.0 + 32;

    // 输出结果
    printf("%.1f℃ = %.1f℉\n", celsius, fahrenheit);

    return 0;
}

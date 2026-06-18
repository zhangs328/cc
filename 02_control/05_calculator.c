/*
 * 05_calculator.c — 简单计算器
 *
 * 📌 说明：输入两个数和运算符（+-*/），计算结果
 * - 学习 switch-case 多分支
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    double a, b, result;
    char op;

    printf("请输入表达式（如 3 + 5）：");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0)
        {
            printf("错误：除数不能为 0！\n");
            return 1;
        }
        result = a / b;
        break;
    default:
        printf("错误：不支持的运算符 %c\n", op);
        return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, result);

    return 0;
}

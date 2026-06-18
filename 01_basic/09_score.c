/*
 * 09_score.c — 计算总成绩和平均分
 *
 * 📌 说明：输入语数外三科成绩，计算总分和平均分
 * - 学习多个变量的输入和处理
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    float chinese, math, english;
    float total, average;

    printf("请输入语文、数学、英语成绩（用空格隔开）：");
    scanf("%f %f %f", &chinese, &math, &english);

    total = chinese + math + english;
    average = total / 3.0;

    printf("\n===== 成绩单 =====\n");
    printf("语文: %.1f\n", chinese);
    printf("数学: %.1f\n", math);
    printf("英语: %.1f\n", english);
    printf("总分: %.1f\n", total);
    printf("平均分: %.1f\n", average);

    return 0;
}

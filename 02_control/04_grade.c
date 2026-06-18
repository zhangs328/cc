/*
 * 04_grade.c — 成绩等级
 *
 * 📌 说明：输入百分制成绩，输出等级
 *   90-100: A   80-89: B   70-79: C   60-69: D   0-59: E
 * - 学习 else-if 多分支结构
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("请输入成绩(0-100)：");
    scanf("%d", &score);

    // 检查输入是否合法
    if (score < 0 || score > 100)
    {
        printf("成绩必须在 0-100 之间！\n");
        return 1;
    }

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'E';

    printf("成绩：%d → 等级：%c\n", score, grade);

    return 0;
}

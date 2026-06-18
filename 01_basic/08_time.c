/*
 * 08_time.c — 时分秒转换
 *
 * 📌 说明：输入总秒数，转换为时:分:秒格式
 * - 学习整除 / 和取余 % 的运用
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    int total, hours, minutes, seconds;

    printf("请输入总秒数：");
    scanf("%d", &total);

    hours = total / 3600;          // 1 小时 = 3600 秒
    minutes = (total % 3600) / 60; // 剩余秒数转分钟
    seconds = total % 60;          // 剩余秒数

    printf("%d 秒 = %d 时 %d 分 %d 秒\n",
           total, hours, minutes, seconds);

    return 0;
}

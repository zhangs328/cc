/*
 * 02_info.c — 个人信息输出
 *
 * 📌 说明：定义变量并输出个人信息
 * - 学习 int、float、char 类型
 * - 使用 %d、%f、%c 格式化输出
 *
 * 🏆 难度：⭐
 */

#include <stdio.h>

int main()
{
    // 定义变量
    char name[] = "张三";    // 字符串
    int age = 19;           // 整数
    float height = 175.5;   // 浮点数
    char gender = 'M';      // 字符

    // 输出信息
    printf("===== 个人信息 =====\n");
    printf("姓名：%s\n", name);
    printf("年龄：%d 岁\n", age);
    printf("身高：%.1f cm\n", height);
    printf("性别：%c\n", gender);

    // 试试修改上面的变量值，输出你自己的信息

    return 0;
}

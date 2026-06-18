/*
 * 04_sizeof.c — 数据类型大小
 *
 * 📌 说明：输出各数据类型占用的字节数
 * - 学习 sizeof 运算符
 * - 了解不同数据类型的存储大小
 *
 * 🏆 难度：⭐
 */

#include <stdio.h>

int main()
{
    printf("===== 数据类型大小（字节） =====\n");
    printf("char:      %zu 字节\n", sizeof(char));
    printf("short:     %zu 字节\n", sizeof(short));
    printf("int:       %zu 字节\n", sizeof(int));
    printf("long:      %zu 字节\n", sizeof(long));
    printf("long long: %zu 字节\n", sizeof(long long));
    printf("float:     %zu 字节\n", sizeof(float));
    printf("double:    %zu 字节\n", sizeof(double));
    printf("\n");

    // 思考题：为什么不同数据类型占用的空间不同？

    return 0;
}

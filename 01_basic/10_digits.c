/*
 * 10_digits.c — 数字分离
 *
 * 📌 说明：输入一个三位数，分别输出百位、十位、个位
 * - 学习整除和取余分离各位数字
 *
 * 🏆 难度：⭐⭐
 */

#include <stdio.h>

int main()
{
    int num, hundreds, tens, units;

    printf("请输入一个三位数：");
    scanf("%d", &num);

    hundreds = num / 100;         // 百位：除以 100
    tens = (num / 10) % 10;       // 十位：先除10去掉个位，再取余
    units = num % 10;             // 个位：取余 10

    printf("%d 的各位数字：\n", num);
    printf("百位: %d\n", hundreds);
    printf("十位: %d\n", tens);
    printf("个位: %d\n", units);

    // 💡 思考：如果是五位数，怎么分离万位到个位？

    return 0;
}

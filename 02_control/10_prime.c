/*
 * 10_prime.c — 素数判断
 *
 * 📌 说明：输入一个正整数，判断是否为素数
 * - 素数：只能被 1 和本身整除
 * - 学习 for + break 优化
 *
 * 🏆 难度：⭐⭐⭐
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    int is_prime = 1; // 1:是素数  0:不是

    printf("请输入一个正整数：");
    scanf("%d", &num);

    if (num < 2)
    {
        is_prime = 0;
    }
    else
    {
        // 只需检查到 sqrt(num) 即可，提高效率
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break; // 找到因子，跳出循环
            }
        }
    }

    if (is_prime)
    {
        printf("%d 是素数\n", num);
    }
    else
    {
        printf("%d 不是素数\n", num);
    }

    return 0;
}

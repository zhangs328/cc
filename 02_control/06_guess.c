/*
 * 06_guess.c — 猜数字游戏
 *
 * 📌 说明：程序随机生成 1-100 的数，用户猜
 * - 学习 while 循环、随机数生成
 * - rand() 配合 srand() 使用
 *
 * 🏆 难度：⭐⭐⭐
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int target, guess, attempts = 0;

    // 初始化随机种子
    srand(time(NULL));
    target = rand() % 100 + 1; // 1~100 随机数

    printf("===== 猜数字游戏 =====\n");
    printf("我已经想好了一个 1-100 之间的数，你来猜！\n\n");

    while (1)
    {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        attempts++;

        if (guess < target)
        {
            printf("太小了！再试试\n");
        }
        else if (guess > target)
        {
            printf("太大了！再试试\n");
        }
        else
        {
            printf("🎉 恭喜！你用了 %d 次猜对了！\n", attempts);
            break;
        }
    }

    return 0;
}

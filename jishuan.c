 /* 要求：
     *   输入两个整数和一个运算符（+ - * / %），用 switch
     *   计算结果。注意除零错误。
     *   输入格式："5 + 3"（整数 空格 运算符 空格 整数）
     */
#include <stdio.h>
int main()
{
    int a;
    int b;
    char c='-';

    printf("请输入：");
    scanf("%d %c %d",&a,&c,&b);

    switch(c){
        case '+':printf("%d %c %d = %d\n",a,c,b,a+b);
        break;
        case '-':printf("%d %c %d = %d\n",a,c,b,a-b);
        break;
        case '/':printf("%d %c %d = %d",a,c,b,a/b);
        break;
        case '%':printf("%d %c %d = %d",a,c,b,a%b);
        break;
        case '*':printf("%d %c %d = %d",a,c,b,a*b);
        break;
    }
    return 0;
}

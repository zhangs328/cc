// TODO: 用递归写阶乘 int fact(int n)
// n! = n * (n-1)!
// 要求：输入负数提示错误
#include <stdio.h>

int fact(int n){
    int sum=1;
    if(n<=0){
        printf("error");
    }
    for(;n>0;n--){
            sum *= n;
        }
    return sum;
}
int main()
{
    int n;
    int sum=1;

    printf("输入数字：");
    scanf("%d",&n);

    sum =fact(n);

    printf("阶乘为:%d",sum);

    return 0;
}

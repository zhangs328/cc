//ODO: 把下面这段约分逻辑封装成函数
// int gcd(int a, int b)  // 求最大公约数
// 然后在 main 里调用 gcd 来约分
#include <stdio.h>
 int gcd(int a,int b){
    int data=0;
    while(b !=0){
        data=a%b;
        a=b;
        b=data;

    }

    return a;
 }
 int main()
 {
    int a,b;
    printf("输入数字:");
    scanf("%d %d",&a,&b);

    int c=gcd(a,b);
    printf("最大公约数为：%d",c);

    return 0;

 }

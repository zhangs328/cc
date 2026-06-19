//求数列前N项和
#include <stdio.h>
int main()
{
    int n;
    printf("输入数字：");
    scanf("%d",&n);

    double sum=0.0;
    int a=2;
    int b=1;

    for(int i=1;i<=n;i++){
        sum+=1.0*a/b;
        int data=a;
        a+=b;
        b=data;
        printf("%.2lf\n",sum);

    }


    printf("%.2lf",sum);// 2/1 3/2 5/3 8/5 11/8

    return 0;
}

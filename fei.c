//打印 n 以内的斐波那契数列
#include <stdio.h>
int main()
{
    int a=1;
    int n=0;
    int m=1;
    int sum;
    int c;

    printf("输入数字：");
    scanf("%d",&c);
    if(c==1){
        printf("0");
    }
    if(c==2){
        printf("1");
    }
    printf("%d %d",n,m);
    while(a<=c-2){
        sum=m+n;
        printf(" %d",sum);
        n=m;
        m=sum;
        a++;

    }


    return 0;
}

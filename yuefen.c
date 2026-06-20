//输入分数约分
#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("输入分数：");
    scanf("%d/%d",&a,&b);
    int s=a;
    int d=b;
    int m;
    while(b>0){
        m=a%b;
        a=b;
        b=m;
    }

    printf("%d/%d",s/a,d/a);

    return 0;
}

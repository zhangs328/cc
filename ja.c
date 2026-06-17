#include <stdio.h>
int main()
{
    int n;
    int i=1;
    double sum=0;
    printf("请输入数字:");
    scanf("%d",&n);
    for(;i<=n;i++){
        sum +=1.0/i;
    }
    printf("和为:%lf",sum);

    return 0;
}
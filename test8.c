// 用数组存前n个斐波那契数（n由输入决定）
// 输入n（≤50），打印前n项
#include <stdio.h>
int main()
{
    int n;
    printf("输入数字:");
    scanf("%d",&n);
    long long num[n];
    if(n>=1){
        num[0]=0;
    }
    if(n>=2){
        num[1]=1;
    }
        for(int i=2;i<n;i++){
            num[i]=num[i-1]+num[i-2];
        }


    for(int i=0;i<n;i++){
        printf("%lld ",num[i]);
    }

    return 0;
}

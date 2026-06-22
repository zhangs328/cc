// 输入 n（不超过100），再输入 n 个数
// 打印和与平均值（保留两位小数）
#include <stdio.h>
int main()
{
    int cnt=0;
    int n;
    int sum=0;
    printf("输入数字:");
    scanf("%d",&n);
    while(cnt<n){
        int x;
        scanf("%d",&x);
        sum +=x;
        cnt++;
    }

    double data=1.0*sum/n;
    printf("和是:%d,平均值是:%.2f",sum,data);


    return 0;
}

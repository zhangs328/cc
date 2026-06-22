// 输入5个数存入数组，倒序打印
#include <stdio.h>
int main()
{
    int num[5];
    int cnt=0;
    while(cnt<5){
        int x;
        printf("输入数字:");
        scanf("%d",&x);
        num[cnt]=x;
        cnt ++;
    }
    for(int i=cnt-1;i>=0;i--){
        printf("%d ",num[i]);
    }
    return 0;
}

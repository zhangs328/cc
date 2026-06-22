// 输入 n 个数，从小到大排序
// 用冒泡排序实现，不能用系统自带的排序
#include <stdio.h>
int main()
{
    int cnt=0;
    int x;
    printf("输入数字:");
    scanf("%d",&x);
    int num[x];
    while(cnt<x){
        int n;
        scanf("%d",&n);
        num[cnt]=n;
        cnt++;
    }
    for(int i=0;i<x-1;i++){
        for(int j=0;j<x-i-1;j++){
            if(num[j]>num[j+1]){
                int data=num[j];
                num[j]=num[j+1];
                num[j+1]=data;
            }

        }
    }
    printf("结果:");
    for(int a=0;a<x;a++){
        printf("%d",num[a]);
    }

    return 0;
}

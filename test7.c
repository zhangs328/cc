// 输入一个n行n列的矩阵（先输入n，不超过10）
// 计算主对角线（左上到右下）的和;
#include <stdio.h>
int main(){
    int n;
    printf("输入数字:");
    scanf("%d",&n);
    int num[n*n];
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            int i;
            scanf("%d",&i);
            int data=x*n+y;
            num[data]=i;

        }

    }

    int sum=0;
    for(int x=1;x<n;x++){
        int y=x;
        int data=x*n+y;
        sum +=num[data];

    }

    printf("和为:%d",sum);

     return 0;
}

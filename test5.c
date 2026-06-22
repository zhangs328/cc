//输入一个3x3矩阵，输出它的转置
// 例：          转置 →
// 1 2 3       1 4 7
// 4 5 6   →   2 5 8
// 7 8 9       3 6 9
#include <stdio.h>
int main()
{
    int num[9];
    int cnt=0;
    printf("输入数字:");
    while(cnt<9){
        int x;
        scanf("%d",&x);
        num[cnt]=x;
        cnt++;
    }
    for(int i=0;i<=2;i++){
        for(int n=0;n<=2;n++){
            printf("%d ",num[n*3+i]);
        }
        printf("\n");
    }
    return 0;
}

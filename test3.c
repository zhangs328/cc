// 输入10个数，打印最大值和它在第几个位置
// 例：3 7 2 9 5 1 8 4 6 0 → 最大值9，第4个
#include <stdio.h>
int main()
{
    int cnt=0;
    int num[10];
    int n;
    printf("输入数字:");
    while(cnt<10){
        scanf("%d",&n);
        num[cnt]=n;
        cnt++;
    }

    int max=num[0];
    int data=1;
    for(int i=0;i<10;i++){
        if(num[i]>max){
            max=num[i];
            data++;
        }
    }

    printf("最大值为：%d,位置在：%d",max,data);
    return 0;
}

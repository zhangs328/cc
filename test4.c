// 输入 n 个数，去掉重复的，只保留第一次出现的
// 例：1 3 2 3 4 2 5 → 1 3 2 4 5
#include <stdio.h>
int main()
{
    int n;
    printf("输入数字:");
    scanf("%d",&n);
    int num[n];
    int i=0;
    while(i<n){
        int x;
        scanf("%d",&x);
        num[i]=x;
        i++;
    }
    for(int a=0;a<n;a++){
        int data=0;
        for(int b=0;b<a;b++){
            if(num[a]==num[b]){
                data=1;
                break;
            }
        }
        if(data==0){
            printf("%d ",num[a]);

        }
    }
     return 0;
}

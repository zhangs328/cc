// n 个人围成一圈，每数到 m 就淘汰一个人，求最后剩下的人编号
// 例：n=7, m=3 → 淘汰顺序：3,6,2,7,5,1 → 剩下4
// 用数组模拟：0表示淘汰，1表示存活
#include <stdio.h>
int main()
{
    const int m=3;
    int n=7;
    int arr[100];
    for(int i=0;i<n;i++){
        arr[i]=1;
    }
    int remain=n;
    int idx=0;
    int count=0;
    while(remain>1){
        if (arr[idx]==1){
            count++;
            if(count==m){
                arr[idx]=0;
                printf("淘汰:%d\n",idx+1);
                remain--;
                count=0;
            }
        }
        idx=(idx+1)%n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            printf("剩下:%d",i+1);
        }
    }


    return 0;
}

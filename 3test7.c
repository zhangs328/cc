// 输入一个正整数，输出它的二进制形式
// 例：输入 13 → 输出 1101
// 提示：反复除以2，余数存数组，最后倒序打印
// 附加：写一个函数 void to_binary(int n) 完成转换
#include <stdio.h>
void reverse(int len,int arr[]);
int main()
{
    int x;
    int arr[100];
    int *p=arr;
    int data=0;
    printf("输入正整数:");
    scanf("%d",&x);
    while(x >0){
       *p=x%2;
        p++;
        data++;
        x=x/2;
    }
    reverse(data,arr);
    return 0;
}
void reverse(int len,int arr[]){
    for(int i=len-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

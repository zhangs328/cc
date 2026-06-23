// 把数组循环右移 k 个位置
// 例：[1 2 3 4 5] 右移2位 → [4 5 1 2 3]
// 要求：在原数组上操作（不创建新数组）
#include <stdio.h>
void repeat(int a[],int i,int length){
    while(i<length){
        int data=a[i];
        a[i]=a[length];
        a[length]=data;
        i++;
        length--;
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int x;
    printf("输入位移位数：");
    scanf("%d",&x);
    if(x<0){
        x=x%5+5;
    }else{
        x=x%5;
    }

    repeat(a,0,4);
    repeat(a,0,x-1);
    repeat(a,x,4);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;

}

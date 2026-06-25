// 在有序数组中查找一个数，返回它的下标
// 例：[1 3 5 7 9 11] 查找 7 → 输出 3（下标）
// 提示：定义 left=0, right=len-1, 每次取中间比较
#include <stdio.h>
int main()
{
    int arr[]={1,4,5,7,9};
    int len=sizeof(arr)/sizeof(int);
    int x;
    printf("输入查找的数字：");
    scanf("%d",&x);
    int left=0;
    int right=len-1;
    int index=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==x){
            index=mid;
            break;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
        else if(arr[mid]>x){
            right=mid-1;
        }
    }
    if(index!=-1){
        printf("%d ",index);
    }else{
        printf("没找到相应数字");
    }
    return 0;
}

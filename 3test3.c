// 一个数组中，其他数都出现两次，只有一个数出现一次
// 例：[4 1 2 1 2] → 只出现一次的数是 4
// 附加题：不用双重循环，用 O(n) 完成（提示：异或）
#include <stdio.h>
int main()
{
    int arr[]={1,4,2,5,3,6,6,3,2,5,4};
    int len=sizeof(arr)/sizeof(int);
    int data=0;
    for(int i=0;i<len;i++){
        data ^=arr[i];

    }
    printf("%d ",data);
    return 0;
}

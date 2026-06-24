// 一个数组中，其他数都出现两次，只有一个数出现一次
// 例：[4 1 2 1 2] → 只出现一次的数是 4
// 附加题：不用双重循环，用 O(n) 完成（提示：异或）
#include <stdio.h>
int main()
{
    int a[]={3,5,6,4,6,4,5,8,1,9,3,8};
    int res=0;
    int i=0;
    int len =sizeof(a)/sizeof(0);
    for(i=0;i<len;i++){
        res ^=a[i];
    }
    printf("%d只出现了一次",res);

    return 0;
}

// 输入数组 [1 2 3 2 4 2 5] 和要删除的 2
// 输出 [1 3 4 5]
// 提示：把要保留的元素往前挪，最后打印有效长度
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,2,4,2,5};
    int *p;
    p= arr;
    int len=sizeof(arr)/sizeof(int);
    int  *slow=arr;
    for(int i=0;i<len;i++){
        if(*p!=2){
            *slow=*p;
            slow++;
        }
        p++;
    }
    printf("%p\n",arr);
    printf("%p\n",slow);
    int vaild_len=slow-arr;
    printf("有效长度是%d ",vaild_len);
    printf("[ ");
    for(int i=0;i<vaild_len;i++){
        printf("%d",arr[i]);

        if(i != vaild_len-1){
            printf(" ");
    }
}
    printf("]");

    return 0;
}

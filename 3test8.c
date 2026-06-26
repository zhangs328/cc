// 写一个函数 print_array(int arr[], int len) 打印数组
// 写一个函数 sum_array(int arr[], int len) 返回数组元素之和
// 然后在 main 里调用它们
#include <stdio.h>
void print_array(int arr[],int len);
int sum_array(int arr[],int len);
int main()
{
    int arr[]={1,3,4,2,6,5,7,9};
    int len=sizeof(arr)/sizeof(int);
    print_array(arr,len);
    sum_array(arr, len);

    return 0;
}
void print_array(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int sum_array(int arr[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i];
    }
    printf("%d\n",sum);
    return sum;
}

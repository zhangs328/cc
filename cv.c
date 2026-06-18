#include <stdio.h>
int main()
{
    int data;
    int i = 0;
    int sum =0;


    printf("请输入数字:");
    scanf("%d",&data);
    int frist = data;

    while(data !=0){
        i=data%10;
        sum +=i*i*i;
        data=data/10;
    }if(sum == frist){
        printf("是水仙花数");
    }else{
        printf("不是水仙花数");
    }


    return 0;
    
}
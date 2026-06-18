#include <stdio.h>
int main()
{
    int data;
    int i=0;
    printf("请输入数字:");
    scanf("%d",&data);

    while(data%10 != 0){
        i += data%10;
        data=data/10;
    }

    printf("%d",i);

    return 0;

}
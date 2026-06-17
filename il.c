#include <stdio.h>
int main()
{
    int num;
    int data=1;
    int amount;

    printf("请输入数字：");
    scanf("%d",&num);
    amount =num;

    while(num>9){
        data *=10;
        num/=10;
    }
    for(int i=0;data>0;data/=10){
        i =amount/data;
        printf("%d",i);
        amount%=data;
    
    }
    
    return 0;

}
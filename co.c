#include <stdio.h>
int main()
{
    int a;
    int b;
    int min =0;

printf("输入数字：");
scanf("%d %d",&a,&b);

    if(a<b){
        min =a;
    }else{
        min=b;
    }
    int i;

    for(i=min;i>=1;i--){
        if(a%i==0){
            if(b%i==0)
            break;
        }
    }
    printf("最大公约数：%d",i);

    return 0;
}
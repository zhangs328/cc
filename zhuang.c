//求最大公约数
#include <stdio.h>

int main()
{
    int a,b;
    printf("请输入数字：");
    scanf("%d%d",&a,&b);

    int min=0;
    int max=0;
    int i;
    if(a<b){
        min=a,max=b;
    }else{
        min=b,max=a;
    }

    while(min !=0){
        i=max%min;
        max=min;
        min=i;
    }

    


    printf("最大公约数为：%d\n",max);

    return 0;
    

}
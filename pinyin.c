//输出数字对应的拼音
#include <stdio.h>
int main()
{
    int i;
    printf("输入整数：");
    scanf("%d",&i);
    if(i<0){
        i=-i;
        printf("fu");
    }

    int data=1;
    int l=i;
    for(;l>9;data*=10){
        l/=10;
    }
    for(;data>0;data/=10){
        int a=i/data;
        i=i%data;
        switch(a){
            case 0:printf("ling");
            break;
            case 1:printf("yi");
            break;
            case 2:printf("er");
            break;
            case 3:printf("san");
            break;
            case 4:printf("si");
            break;
            case 5:printf("wu");
            break;
            case 6:printf("liu");
            break;
            case 7:printf("qi");
            break;
            case 8:printf("ba");
            break;
            case 9:printf("jiu");
            break;
        }
    }

    return 0;
}

//九九乘法表
#include <stdio.h>
int main()
{
    int a=1;
    int b=1;
    int c;

    for(a=1;a<=9;a++){
        for(b=1;b<=a;b++){
            c=a*b;
            if(c/10<0){
            printf("%d*%d=%d   ",b,a,c);
        }else{
            printf("%d*%d=%d  ",b,a,c);
        }

        }

        printf("\n");
    }


    return 0;
}

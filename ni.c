#include <stdio.h>

int main()
{
    int a;
    int b=0;
    int c;

    printf("请输入数字:");
    scanf ("%d",&a);

    while(a>0){
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    printf("%d",b);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int a = rand() % 100;
    int b;
    int court = 0;

    do{
        printf ("输入数字：");
        scanf ("%d",&b);

        court ++;
        if (a>b){
            printf("数太小了");
        }else if(a < b){
            printf("数太大了");
        }

    }while(a != b);

    printf("你猜对了,用了%d\n",court);

    return 0;
}
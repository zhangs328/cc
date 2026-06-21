//TODO: 写一个函数拆分秒数
// void split_time(int sec, int *h, int *m, int *s)
// 输入 3661 → 1小时1分1秒
#include <stdio.h>

void split_time(int sec,int *h,int *m,int *s){
     *s=sec % 60;
     *m=(sec / 60) % 60;
     *h=(sec / 60) / 60;

}
int main()
{

    int sec;
    int h=0;
    int m=0;
    int s=0;
    printf("输入数字:");
    scanf("%d",&sec);

    split_time(sec,&h,&m,&s);

    printf("%d小时%d分%d秒",h,m,s);
    return 0;
}

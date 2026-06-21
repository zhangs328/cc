/*写一个函数 int max(int a, int b)，返回较大的数
// 然后在 main 里调用它，输入两个数，打印最大值
*/
#include <stdio.h>

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int a;
    int b;
    printf("输入数字：");
    scanf("%d %d",&a,&b);

    int c =max(a,b);

    printf("%d",c);

    return 0;
}

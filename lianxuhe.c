//求连续和 sum=a+aa+aaa.......
#include <stdio.h>
int main()
{
    int a;
    int n;
    printf("输入数字：");
    scanf("%d %d",&a,&n);

    int sum=0;
    int s=0;
    for(int m=1;m<=n;m++){
        s=s*10+a;
        sum+=s;
    }
    printf("%d", sum);
    return 0;
}

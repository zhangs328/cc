//统计素数并求和
#include <stdio.h>
int main()
{
    int m;
    int n;//m!=n, m,n>0
    printf("请输入数字：");
    scanf("%d %d",&m,&n);

    int max;
    int min;

    if(m<n){
        max=n;
        min=m;
    }else{
        max=m;
        min=n;
    }
    if(min==1){
        min=2;
    }
    int i=min;
    for(;i<=max;i++){
        int isPrime=1;
        for(int x=2;x<i;x++){
            if(i%x==0){
                isPrime=0;
                break;
            }
        }


    if(isPrime==1){
        printf("%d是素数\n",i);
    }

    }



    return 0;
}

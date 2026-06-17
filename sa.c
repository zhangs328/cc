#include <stdio.h>
int main()
{ 
    int n = 0;
    int x;

    printf("请输入数字:\n");
    scanf("%d",&x);
    
   if(x == 0){
    n = 1;
   } else {
    while(x > 0){
        ++n;
        x /= 10;
    }
   }

    printf("数字位数为：%d\n", n);

    return 0;
}

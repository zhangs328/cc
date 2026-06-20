/* 要求：
     *   输入行数n（奇数），打印一个由 * 组成的菱形
     *   例 n=5：
     *       *
     *      ***
     *     *****
     *      ***
     *       *
     */
    #include <stdio.h>
    int main()
    {
        int n;//n为奇数
        do{
        printf("输入行数；");
        scanf("%d",&n);
        }while(n%2==0);

         int mid=n/2;

         for(int i=0;i<=mid;i++){
            for(int a=0;a<=mid-i-1;a++){
                printf(" ");
            }
            for(int b=0;b<2*i+1;b++){
                printf("*");
            }
            printf("\n");

         }

         for(int i=mid-1;i>=0;i--){
            for(int a=0;a<=mid-i-1;a++){
                printf(" ");
            }
            for(int b=0;b<=2*i+1;b++){
                printf("*");
            }
            printf("\n");
         }
        return 0;
    }

// 输入行数 n，打印杨辉三角
// n=5 时：
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// 提示：每行首尾是1，中间是上一行两个相邻数之和
#include <stdio.h>
int main()
{
    int n;
    printf("输入行数：");
    scanf("%d",&n);
    int num[100][100]={0};
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int x=0;x<=i;x++){
            if(x==0||x==i){
                num[i][x]=1;
            }else{
            num[i][x]=num[i-1][x-1]+num[i-1][x];
            }
            printf("%d ",num[i][x]);

        }
        printf("\n");
    }

    return 0;
}

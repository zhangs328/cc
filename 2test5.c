// 输入 n x n 矩阵，按顺时针从外到内打印
// 例：        输出：
// 1  2  3     1 2 3 6 9 8 7 4 5
// 4  5  6
// 7  8  9
#include <stdio.h>
int main()
{
    int n=0;
    printf("输入行数：");
    scanf("%d",&n);
    int num[100][100];
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            num[i][k]=i*n+k+1;
        }                                                                //            b
    }                                                                   /*00 01 02 03 04 a
                                                                          10 11 12 13 14
                                                                          20 21 22 23 24
                                                                          30 31 32 33 34
                                                                        d 40 41 42 43 44*/
                                                                    //    c
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;
    while(top<=bottom&&left<=right){
        for(int z=left;z<=right;z++){
            printf("%d ",num[top][z]);
        }
        top++;
        for(int z=top;z<=bottom;z++){
            printf("%d ",num[z][right]);
        }
        right--;
        if(top<=bottom){
            for(int z=right;z>=bottom;z--){
                printf("%d ",num[bottom][z]);
            }
            bottom--;
        }
        if(left<=right){
            for(int z=bottom;z>=top;z--){
                printf("%d ",num[z][left]);
            }
            left++;
        }


    }
    return 0;
}

// 题目：矩阵乘法与转置（指针的指针）
// 要求：
//   1. 写函数动态创建 m×n 矩阵
//   2. 写函数计算两个矩阵的乘积 C = A × B
//   3. 写函数计算矩阵的转置
//   4. 写函数打印矩阵
// 考点：二级指针（int**）、动态二维数组、矩阵运算
#include <stdio.h>
#include <stdlib.h>
int **matrix(int n,int m)
{
    int **mat=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        mat[i]=(int*)malloc(m*sizeof(int));
    }
    return mat;
}
int** run_matrix(int**A,int n,int k,int**B,int m)
{
    int **C=matrix(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum=0;
            for(int x=0;x<k;x++)
            {
                sum+=A[i][x]*B[x][j];
            }
            C[i][j]=sum;
        }
    }
    return C;
}
int** give_matrix(int**mat,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mat[i][j]=(i+1)*(j+1);
        }
    }
    return mat;
}
int** revese_matrix(int**mat,int n,int m)
{
    int **res=matrix(m,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            res[j][i]=mat[i][j];
        }
    }
    return res;
}
void printf_matrix(int **mat,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
void release(int **mat,int n)
{
    for(int i=0;i<n;i++)
    {
        free(mat[n]);
    }
    free(mat);
    mat=NULL;
}
int main()
{
    int n=3;int m=5;int k=2;
    int **A=matrix(n,k);
    int **B=matrix(k,m);
    give_matrix(A,n,k);
    give_matrix(B,k,m);
    int**C=run_matrix(A,n,k,B,m);
    int**T=revese_matrix(C,n,m);
    printf_matrix(T,m,n);
    printf("输出矩阵：\n");
    printf_matrix(C,n,m);
    release(A,n);
    release(B,k);
    release(C,n);

    return 0;
}

// 题目：矩阵乘法与转置（指针的指针）
// 要求：
//   1. 写函数动态创建 m×n 矩阵
//   2. 写函数计算两个矩阵的乘积 C = A × B
//   3. 写函数计算矩阵的转置
//   4. 写函数打印矩阵
// 考点：二级指针（int**）、动态二维数组、矩阵运算
#include <stdio.h>
#include <stdlib.h>
int** create_matrix(int(n),int(m))
{
    int** mat=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        mat[i]=(int*)malloc(m*sizeof(int));
    }
    return mat;
}
void  printf_matrix(int**mat,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
int**matrix_mul(int**A,int k,int n,int **B,int m)
{
    int **C=create_matrix(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum=0;
            for(int t=0;t<k;t++)
            {
                sum+=A[i][t]*B[t][j];
            }
            C[i][j]=sum;
        }
    }
    return C;
}
int**matrixtranspose(int **mat,int n,int m)
{
    int **res=create_matrix(n,m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[j][i]=mat[i][j];
        }
    }
    return res;
}
void free_matrix(int**mat,int row)
{
    for(int i=0;i<row;i++)
    {
        free(mat[i]);
    }
    free(mat);
}
int main()
{
    int n=3;
    int m=5;
    int k=2;
    int**A=create_matrix(n,k);
    int**B=create_matrix(k,m);
    A[0][0]=1;A[0][1]=2;
    B[0][0]=1;B[0][1]=2;
    printf("矩阵A:\n");
    printf_matrix(A,n,k);
    printf("矩阵B:\n");
    printf_matrix(B,k,m);
    int **C=matrix_mul(A,n,k,B,m);
    printf("A*B的结果: \n");
    printf_matrix(C,n,m);
    int **T=matrixtranspose(C,n,m);
    printf("乘积矩阵的倒置输出：\n");
    printf_matrix(T,m,n);
    free_matrix(A,n);
    free_matrix(B,k);
    free_matrix(C,n);
    free_matrix(T,m);


    return 0;
}

// 题目：动态学生成绩管理系统
// 要求：
//   1. 定义 Student 结构体（学号、姓名、3门课成绩）
//   2. 用户输入学生人数 n，动态分配内存
//   3. 输入每个学生信息，计算总分和平均分
//   4. 按总分从高到低排序输出
// 考点：结构体、动态内存分配（malloc）、排序、指针
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char name[20];
    int i;
    int j;
    int k;
    int sum;
    double avg;
}student;
int main()
{
    int n;
    printf("输入人数：\n");
    scanf("%d",&n);
    student *stu=(student*)malloc(n*sizeof(student));
    for(int i=0;i<n;i++)
    {
        printf("输入第%d个学生信息:\n",i+1);
        scanf("%d %s %d %d %d",&stu[i].id,stu[i].name,&stu[i].i,&stu[i].j,&stu[i].k);
        printf("\n");
        stu[i].sum=stu[i].i+stu[i].j+stu[i].k;
        stu[i].avg=stu[i].sum/3.0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(stu[j].sum<stu[j+1].sum)
            {
                student temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    printf("按总分从高到低输出：\n");
    for(int i=0;i<n;i++)
    {
        printf(" 名次%d %d %s 总分%d 平均分%.2f\n",i+1,stu[i].id,stu[i].name,stu[i].sum,stu[i].avg);
    }
    free(stu);
    stu=NULL;
    return 0;
}

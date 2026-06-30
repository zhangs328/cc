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
    int one;
    int two;
    int three;
    int sum;
    double avg;
}student;
int main()
{
    int n;
    printf("输入人数:\n");
    scanf("%d",&n);
    student *stu=(student*)malloc(n*sizeof(student));
    if(stu==NULL)
    {
        printf("内存分配失败！\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        printf("输入%d个学生信息:\n",i+1);
        scanf("%d %s %d %d %d",&stu[i].id,stu[i].name,&stu[i].one,&stu[i].two,&stu[i].three);
        stu[i].sum=stu[i].one+stu[i].two+stu[i].three;
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
    printf("==按总分从大到小的顺序排列==\n");
    for(int i=0;i<n;i++)
    {
        printf("%d %d %s %d %d %d %d %.2f\n",
            i+1,stu[i].id,stu[i].name,stu[i].one,stu[i].two,stu[i].three,stu[i].sum,stu[i].avg);
    }
    free(stu);
    stu=NULL;

    return 0;
}

// 题目：动态学生成绩管理系统
// 要求：
//   1. 定义 Student 结构体（学号、姓名、3门课成绩）
//   2. 用户输入学生人数 n，动态分配内存
//   3. 输入每个学生信息，计算总分和平均分
//   4. 按总分从高到低排序输出
// 考点：结构体、动态内存分配（malloc）、排序、指针
#include <stdio.h>
#include <stdlib.h>
typedef struct Student
{
    int id;
    char name[20];
    int s1,s2,s3;
    int total;
    double avg;
}Student;
int main()
{
    int n;
    printf("输入学生人数：");
    scanf("%d",&n);
    Student *stu=(Student*)malloc(n*sizeof(Student));
    for(int i=0;i<n;i++){
        printf("请输入%d个学生:学号 姓名 三门成绩\n",i+1);
        scanf("%d %s %d %d %d",&stu[i].id,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3);
        stu[i].total=stu[i].s1+stu[i].s2+stu[i].s3;
        stu[i].avg=stu[i].total/3.0;
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(stu[j].total<stu[j+1].total)
                {
                    Student temp=stu[j];
                    stu[j]=stu[j+1];
                    stu[j+1]=temp;
                }
            }
        }
        printf("\n====按总分降序排列====\n");
        for(int i=0;i<n;i++){
            printf("学号：%d 姓名:%s 总分：%d 平均分：%.2f\n",stu[i].id,stu[i].name,stu[i].total,stu[i].avg);
        }
        free(stu);
        stu=NULL;

    return 0;
}

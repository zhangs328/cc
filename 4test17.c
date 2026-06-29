// 题目：学生成绩文件统计（文件 IO）
// 要求：
//   1. 从文件 scores.txt 读取学生成绩（CSV 格式）
//   2. 统计每门课的最高分、最低分、平均分
//   3. 将统计结果写入 report.txt
//   4. 在终端打印统计报告
//
// scores.txt 格式（每行：学号,姓名,数学,英语,C语言）：
// 101,张三,85,90,78
// 102,李四,92,88,95
//
// 考点：fopen/fscanf/fprintf、文件读写、结构体数组、统计
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char name[20];
    int math;
    int english;
    int c;
}student;
int main()
{
    FILE *fin=fopen("scores.txt","r");
    FILE *fout=fopen("report.txt","w");
    if(fin==NULL||fout==NULL)
    {
        printf("文件打开失败!\n");
        return 1;
    }
    student arr[100];
    int count=0;
    while(fscanf(fin,"%d %[^,],%d,%d %d",
        &arr[count].id,
        arr[count].name,
        &arr[count].math,
        &arr[count].english,
        &arr[count].c)!=EOF)
        {
            count++;
        }
    fclose(fin);
    int max_m=arr[0].math; int min_m=arr[0].math;int sum_m=0;
    int max_e=arr[0].english;int min_e=arr[0].english;int sum_e=0;
    int max_c=arr[0].c;int min_c=arr[0].c;int sum_c=0;
    for(int i=0;i<count;i++)
    {
        if(arr[i].math>max_m){max_m=arr[i].math;}
        if(arr[i].math<max_m){min_m=arr[i].math;}
        sum_m+=arr[i].math;
        if(arr[i].english>max_e){max_e=arr[i].english;}
        if(arr[i].english<min_e){min_e=arr[i].english;}
        sum_e+=arr[i].english;
        if(arr[i].c>max_c){max_c=arr[i].c;}
        if(arr[i].c<min_c){min_c=arr[i].c;}
        sum_c+=arr[i].c;
    }
    double avg_m=1.0*sum_m/count;
    double avg_e=1.0*sum_e/count;
    double avg_c=1.0*sum_c/count;
    fprintf(fout,"课程\t最高分\t最低分\t平均分\n");
    fprintf(fout,"数学\t%d\t%d\t%.2f\n",max_m,min_m,avg_m);
    fprintf(fout,"英语\t%d\t%d\t%.2f\n",max_e,min_e,avg_e);
    fprintf(fout,"C语言\t%d\t%d\t%.2f\n",max_c,min_c,avg_c);
    fclose(fout);

    printf("课程\t最高分\t最低分\t平均分\n");
    printf("数学\t%d\t%d\t%.2f\n",max_m,min_m,avg_m);
    printf("英语\t%d\t%d\t%.2f\n",max_e,min_e,avg_e);
    printf("C语言\t%d\t%d\t%.2f\n",max_c,min_c,avg_c);

    return 0;
}

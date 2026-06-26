// 5名学生，3门课，输入成绩后打印：
//   ① 每个学生的平均分
//   ② 每门课的平均分
// 提示：行遍历求学生平均，列遍历求课程平均
#include <stdio.h>
int main()
{
    int arr[5][3];
    printf("输入成绩：\n");
    for(int n=0;n<5;n++){
        for(int m=0;m<3;m++){
            scanf("%d",&arr[n][m]);
        }
    }
    for(int n=0;n<5;n++){
        int sum=0;
        for(int m=0;m<3;m++){
        sum+=arr[n][m];
        }
        double avg=sum/5.0;
        printf("第%d门课程的平均分:%.2f",n+1,avg);
    }
    for(int n=0;n<3;n++){
        int sum=0;
        for(int m=0;m<5;m++){
            sum+=arr[n][m];
        }
        double avg=sum/3.0;
        printf("第%d个学生的平均分为:%.2f",n+1,avg);
    }
    return 0;
}

#include <stdio.h>;
int main()
{
    int score=0;
    int grade;
    printf("请输入你的成绩：");
    scanf("%d", &score);

    if (score >=90){
        grade = 'A';
    }else{
        grade = 'B';
    }
    
    printf("等级为%c\n",grade);

    return 0;


}
// 输入一个班学生成绩（-1结束），统计各分数段人数
// 0-59 不及格  60-69 及格  70-79 中  80-89 良  90-100 优
// 提示：用 int count[5] 数组分别统计
#include <stdio.h>
int main()
{
    int arr[100];
    int *p=arr;
    int x;
    int vaild_num=0;
    printf("请输入分数：");
    for(int i=0;i<100;i++){
        scanf("%d",&x);
        if(x==-1){
            printf("over\n");
            break;
        }else{
            *p=x;
            p++;
        }
        vaild_num++;
    }
    p=arr;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    for(int i=0;i<vaild_num;i++){
        if(arr[i]<60){
            a++;
        }else if(arr[i]<70){
            b++;
        }else if(arr[i]<80){
            c++;
        }else if(arr[i]<90){
            d++;
        }else {
            e++;
        }
    }
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}

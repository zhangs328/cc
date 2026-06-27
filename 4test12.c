// 题目：字符串反转（综合指针和数组）
// 要求：写一个函数 reverse_words(char *s)，将句子中每个单词反转
//      "Hello World" → "olleH dlroW"
// 提示：用指针遍历字符串，找到单词边界后反转
// 考点：指针运算、字符串处理、函数封装
#include <stdio.h>
#include <stdlib.h>
void reverse(char *arr,int len);
void reverse_word(char *arr);
int main()
{
    char arr[]="Hello World";
    printf("原字符串：%s\n",arr);
    reverse_word(arr);
    printf("反转后的字符串：%s\n",arr);
    return 0;
}
void reverse(char *arr,int len){
    char *left=arr;
    char *right=arr+len-1;
    char temp=0;
    while(left<right){
        temp=*right;
        *right=*left;
        *left=temp;
        right--;
        left++;
    }
}
void reverse_word(char *arr){
    char *start=arr;
    char *p=arr;
    while(*p!='\0')
    {
        if(*p==' '){
            reverse(start,p-start);
            start=p+1;
        }
        p++;
    }
    reverse(start,p-start);
}

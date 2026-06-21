// TODO: 判断一个数是不是质数
// int is_prime(int n)     ← 判断单个数字
// void print_primes(int limit)  ← 打印 limit 以内的所有质数（调用 is_prime）
#include <stdio.h>

int is_prime(int n){
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return 0;
        }

      return 1;
    }

    return 1;
}
void print_primes(int limit){
    for(int i=2;i<=limit;i++){
        if(is_prime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}

int main()
{
    int limit;
    printf("输入数字：");
    scanf("%d",&limit);
    print_primes(limit);
    return 0;
}

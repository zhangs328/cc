#include <stdio.h>
int main()
{
    int one;
    int two;
    int three;
    int total =0;
    int sum = 0;

    for(one=1;one<10;one ++){
        for(two=0;two<10;two ++){
            for(three=0;three<10;three  ++){
                total =one*one*one+two*two*two+three*three*three;
                sum = one*100+two*10+three;
                if(sum == total){
                    printf("%d是水仙花数\n",sum);
                }
            }
        }
    }
    
    return 0;

}
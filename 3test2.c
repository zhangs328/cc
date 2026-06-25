// 两个已从小到大排好的数组，合并成一个有序数组
// 例：a=[1 3 5 7], b=[2 4 6 8]
//  → c=[1 2 3 4 5 6 7 8]
#include <stdio.h>
int main()
{
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int res[8];
    int *p=res;
    int n=0; int m=0;
    int lenA=sizeof(a)/sizeof(int);
    int lenB=sizeof(b)/sizeof(int);
    while(n<lenA&&m<lenB){
        if(a[n]<b[m]){
            *p=a[n];
            n++;
        }else{
            *p=b[m];
            m++;
        }
        p++;
    }
    if(lenA-n>0){
        for(int x=0;x<lenA-n;x++){
            *p=a[n+x];
            p++;
        }

    }
    if(lenB-m>0){
        for(int x=0;x<lenB-m;x++){
            *p=b[m+x];
            p++;
        }
    }
    p=res;
    for(int x=0;x<lenA+lenB;x++){
        printf("%d ",*p);
        p++;
    }
    return 0;
}

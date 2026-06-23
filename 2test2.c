// 两个已从小到大排好的数组，合并成一个有序数组
// 例：a=[1 3 5 7], b=[2 4 6 8]
//  → c=[1 2 3 4 5 6 7 8]
#include <stdio.h>
int main()
{
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int lenA=sizeof(a)/sizeof(0);
    int lenB=sizeof(b)/sizeof(0);
    int c[lenA+lenB];

    int i=0;int n=0;int m=0;
    while(n<lenA&&m<lenB){
        if(a[n]<b[m]){
            c[i]=a[n];
            n++;
        }else{
            c[i]=b[m];
            m++;
        }
        i++;
    }
    if(n<lenA){
        for(int v=0;v<lenA-n;v++){
            c[i]=a[n+v];
            i++;
        }
    }
    if(m<lenB){
        for(int v=0;v<lenB-m;v++){
            c[i]=b[m+v];
            i++;
        }
    }
    for(int v=0;v<i;v++){
        printf("%d ",c[v]);
    }
    return 0;
}

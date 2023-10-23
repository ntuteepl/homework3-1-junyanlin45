#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main() {
    int s1, d1, s2, d2, s3, d3;
    int a= 1;


    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 首先，按返回时间从早到晚对订单进行排序
    if (d1 > d2) {
        int temp = (s1);
        (s1) = (s2);
        (s2) = temp;
        temp = (d1);
        (d1)=(d2);
        (d2)= temp;
    }
    if (d2 > d3) {
        int temp = (s2);
        (s2) = (s3);
        (s3) = temp;
        temp = (d2);
        (d2) = (d3);
        (d3) = temp;
    }
    if (d1 > d2) {
        int temp = (s1);
        (s1) = (s2);
        (s2) = temp;
        temp = (d1);
        (d1) = (d2);
        (d2) = temp;
    }
//printf("%d %d %d %d %d %d",s1,d1,s2,d2,s3,d3);
    if(d1>=s2)
   a++;
   if(d1>=s3)
   a++;
   if(d2>s3)
    a++;
    
   printf("%d",a);
}

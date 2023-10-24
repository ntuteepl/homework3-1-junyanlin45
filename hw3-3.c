#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,a1,b1,c1,d1,t1,a2,b2,c2,d2,t2;
   scanf("%d%d",&n1,&n2);
   a1=n1/1000;
   b1=(n1-1000*a1)/100;
   c1=(n1-1000*a1-100*b1)/10;
   d1=n1-1000*a1-100*b1-10*c1;
   t1=a1+b1+c1+d1;


   a2=n2/1000;
   b2=(n2-1000*a2)/100;
   c2=(n2-1000*a2-100*b2)/10;
   d2=n2-1000*a2-100*b2-10*c2;
   t2=a2+b2+c2+d2;

   if(t1>t2)
   {
       printf("%d",n2);
   }

   if(t2>t1)
   {
       printf("%d",n1);
   }
if(t1==t2)
   {
       if(n1>n2)
       {
           printf("%d",n2);
       }
       else
       {
           printf("%d",n1);
       }

   }

}


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int j,k=0;
  scanf("%d",&j);

  for(int i=2;i<j;j++)
  {
      if(j%i==0)
      {

          k=1;
          break;


      }

       else
      {
          if(k==0)
          {
              printf("YES\n");
          }
          break;


      }





  }


  if(k==1)
        printf("NO\n");

if(j==2)
        printf("YES\n");





}

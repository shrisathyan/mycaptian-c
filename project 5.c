#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],i,j;
   int *p=a;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("enter the elements");
           scanf("%d",&a[i][j]);
       }
   }
   printf("the array is \n");
   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("%d ",*((p+i*3)+j));
       }
    }
}

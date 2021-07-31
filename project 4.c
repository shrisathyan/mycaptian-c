#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("enter a number from 1-5\n");
   scanf("%d",&a);
   if(a=1)
   {
       printf("Food item - Pizza\n");
       printf("Price - Rs 239");
   }
   else if(a=2)
   {
       printf("Food item - Burger");
       printf("Price - Rs 129");
   }
   else if(a=3)
   {
       printf("Food item - Pasta");
       printf("Price - Rs 179");
   }
   else if(a=4)
   {
       printf("Food item - French Fries");
       printf("Price - Rs 99");
   }
   else
   {
       printf("Food item - Sandwich");
       printf("Price - Rs 149");
   }
   return 0;
}

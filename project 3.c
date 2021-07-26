#include <stdio.h>
int main()
{
    double m;
   printf("Enter the total mark got\n");
   scanf("%lf",&m);
   if(m>=85)
   {
       printf("Grade A\n");
   }
   else if(m>=70)
   {
       printf("Grade B\n");
   }
   else if(m>=55)
   {
       printf("Grade C\n");
   }
   else if(m>=40)
   {
       printf("Grade D\n");
   }
   else if(m<40)
   {
       printf("Grade F");
   }
   return 0;
}



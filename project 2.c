#include <stdio.h>
int main()
{
    int i,j,k;
    printf("Enter first number i\n");
    scanf("%d",&i);
    printf("Enter second number j\n");
    scanf("%d",&j);
    k=i;
    i=j;
    j=k;
    printf("after swapping\n");
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    return 0;
}

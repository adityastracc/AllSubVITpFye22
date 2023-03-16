#include <stdio.h>

int main()
{
   int n,x,flag=0;
   printf("\nEnter Number: ");
   scanf("%d",&n);
   for(x=2;x<n;x++)
   {
   if(n%x==0)
   {
       flag=1;
       break;
   }
   }
   if(flag==1)
   printf("%d is non-prime",n);
   else
    printf("%d is prime",n);
}

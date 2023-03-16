#include <stdio.h>
void main()
{
   int a,b;
   printf("\nEnter A:");
   scanf("%d",&a);
   printf("\nEnter B:");  
   scanf("%d",&b);
   if(a%2==0 && b%2==0)
   printf("Both are even");
   else
   {
   if(a%2==1 && b%2==1)
   printf("Both are odd");
   else
   if(a%2==0)
   printf("A is even");
   else
   printf("B is even");
   }
}

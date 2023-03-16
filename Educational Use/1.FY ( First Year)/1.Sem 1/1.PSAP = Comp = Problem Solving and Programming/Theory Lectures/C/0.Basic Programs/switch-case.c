#include <stdio.h>
#include <conio.h>
void main()
{
   int a,b,ch,ans;
   /*a=10;b=20;
   printf("Addition: %d", ++a + ++b);
   printf("\nAddition: %d", a + b);
   printf("\nAddition: %d", ++a + b++);*/
  printf("\nEnter No1:");
   scanf("%d",&a);
   printf("\nEnter No2:");
   scanf("%d",&b);
   do
   {
   printf("\nMenu");
   printf("\n1. Addition");
  printf("\n2. Subtraction");
  printf("\nEnter Choice:");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:
      printf("\nAddition is:%d",a+b);
      break;
      case 2:
      printf("\nSubtraction is:%d",a-b);
      break;
      default:
      printf("\nWrong input");
  }
  printf("\nDo u want to continue:");
  scanf("%d",&ans);
   }while(ans==1);
  
  
}
   
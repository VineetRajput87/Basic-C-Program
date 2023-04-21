#include<stdio.h>
int main()
{  
   int i , num,sum=0;
   printf("Enter the maximum number for addition : ");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
       sum=sum+i;
   }
   printf("The sum of %d natural nummbers is : %d",num,sum);
   return 0;
}

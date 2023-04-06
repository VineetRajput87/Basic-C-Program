#include<stdio.h>
int main()
{
   int i,num;
   printf("Input number of terms : ");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
      printf("\nNumber is : %d and cube of the %d is : %d",i,i,(i*i*i));
   }
   return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,arr[5];
    for(i=1;i<=5;i++)
    {
        printf("Enter the numbers :");
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
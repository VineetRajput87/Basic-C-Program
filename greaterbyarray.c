#include<stdio.h>
int main()
{
    int array[4],i,max=0;
    printf("Enter numbers of array : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1; i<4; i++)
    {    
        if(array[i]>max)
        {
           max=array[i];
        }
    }
    printf("\nThe Numbers are : ");
        for(i=0; i<4; i++)
        {
        printf("%d ",array[i]);
        }
    printf("\n\nThe Greatest Number is : %d",max);
}
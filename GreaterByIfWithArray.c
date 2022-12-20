#include<stdio.h>
int main()
{
    int array[4],i;
    printf("Enter numbers of array : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe Numbers are : ");
        for(i=0; i<4; i++)
        {
        printf("%d ",array[i]);
        }
    if(array[0]>array[1])
    {
       if(array[0]>array[2])
       {
            if(array[0]>array[3])
            {
                printf("\nThe Greater Number Is : %d",array[0]);   
            }
       } 
    }   
    else
    {
        if(array[1]>array[2])
        {
            if (array[1]>array[3])
            {
                printf("\nThe Greater Number Is : %d",array[1]);
            }
            
        }
       else
       {
            if(array[2]>array[3])
            {
                printf("\nThe Greater Number Is : %d",array[2]);
            }
            else
            {
                printf("\nThe Greater Number Is : %d",array[3]);
            }
        }
    }
    return 0;
}
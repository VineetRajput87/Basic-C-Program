#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 Numbers : ");
    scanf(" %d %d %d %d",&a,&b,&c,&d);

    printf("\nThe Numbers are : %d %d %d %d ",a,b,c,d);
    if(a>b && a>c && a>d)
    {
        printf("\nThe Greater Number Is : %d",a);   
    }   
    else if(b>c && b>d)
    {
        printf("\nThe Greater Number Is : %d",b);
    }
    else if(c>d)
    {
        printf("\nThe Greater Number Is : %d",c);
    }
    else
    {
        printf("\nThe Greater Number Is : %d",d);
    }   
    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
    int i=0,n,k,deci=0;
    printf("Enter a binary no. : ");
    scanf("%d",&n);
    while (n!=0)
    {
       k=n%10;
       if (k==1)
       {
        deci=deci+pow(2,i);
       }
       n=n/10;
       i++;
    }
    return 0;
}

// Q.:- Vineet has planned that he will drink exactly X liters of tea daily. He has an empty jar having a capacity of Y liters.
// Vineet can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Vineet is charged Z rupees.

// Vineet wonders what is the minimum amount of money he has to pay for drinking exactly X liters of tea daily.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>b)
	    {
	        if(a%b==0)
	        printf("%d\n",(a/b)*c);
	        else
	        printf("%d\n",((a/b)+1)*c);
	    }
	    else
	    printf("%d\n",c);
	}
	return 0;
}


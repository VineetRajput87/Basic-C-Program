// Q.:- Vineet has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.
// NOTE: Vineet will not take any candies himself and will distribute all the candies.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a%b==0)
	    {
	        if((a/b)%2==0)
	        printf("Yes\n");
	        else
	        printf("No\n");
	    }   
	    else
	    printf("No\n");
	}
	return 0;
}


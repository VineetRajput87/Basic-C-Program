// Q.:- It is the World Cup Finals. Vineet only finds a match interesting if the skill difference of the competing teams is less than or equal to D.

// Given that the skills of the teams competing in the final are X and Y respectively, determine whether Vineet will find the game interesting or not.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if((a-b)<=c)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}


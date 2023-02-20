// Q.:- It is the final day of La Liga. Vineet has a certain criteria for assessing football matches.
// In particular, he only likes a match if:
// The match ends in a draw, and,
// At least one goal has been scored by either team.
// Given the goals scored by both the teams as X and Y respectively, determine whether Vineet will like the match or not.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a==b)
	    {
	        if(a>0 && b>0)
	        printf("YES\n");
	        else
	        printf("NO\n");
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}


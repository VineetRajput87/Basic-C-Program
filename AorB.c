// Q.:- There are two problems in a contest.

// Problem A is worth 500 points at the start of the contest.
// Problem B is worth 1000 points at the start of the contest.

// Once the contest starts, after each minute:

// Maximum points of Problem A reduce by 2 points .
// Maximum points of Problem B reduce by 4 points.

// It is known that Vineet requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.

// Find the maximum number of points Vineet can score if he optimally decides the order of attempting both the problems.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(((500-(a*2)))+(1000-((a+b)*4))>((500-(b*4)))+(1000-((a+b)*2)))
	    printf("%d\n",((500-(a*2)))+(1000-((a+b)*4)));
	    else
	    printf("%d\n",((500-(b*4)))+(1000-((a+b)*2)));
	    
	}
	return 0;
}


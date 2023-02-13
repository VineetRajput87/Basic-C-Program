// Q.:- In a coding contest, there are two types of problems:

// Easy problems, which are worth 1 point each
// Hard problems, which are worth 2 points each
// To qualify for the next round, a contestant must score at least X points. Chef solved A Easy problems and B Hard problems. Will Vineet qualify or not?

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(((b*1)+(c*2))>=a)
	    printf("Qualify\n");
	    else
	    printf("NotQualify\n");
	}
	return 0;
}


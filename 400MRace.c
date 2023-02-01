// Q.:- Alice, Bob, and Charlie participated in a 400-metre race.

// The time taken by Alice, Bob, and Charlie to complete the race was X,Y, and Z seconds respectively. Note that X,Y, and Z are distinct.

// Determine the person having the highest average speed in the race.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a<b && a<c)
	    printf("ALICE\n");
	    else if(b<a && b<c)
	    printf("BOB\n");
	    else
	    printf("CHARLIE\n");
	}
	return 0;
}


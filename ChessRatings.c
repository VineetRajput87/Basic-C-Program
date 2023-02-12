// Q.:- Alice has recently started playing Chess. Her current rating is X. She noticed that when she wins a game, her rating increases by 8 points.

// Can you help Alice in finding out the minimum number of games she needs to win in order to make her rating greater than or equal to Y?

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if((b-a)%8==0)
	    printf("%d\n",(b-a)/8);
	    else
	    printf("%d\n",((b-a)/8)+1);
	}
	return 0;
}


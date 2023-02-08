// Q.:- Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.

// Given that Alice, Bob, and Charlie have A,B, and C rupees respectively and a Netflix subscription costs X rupees, find whether any two of them can contribute to buy a subscription.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(d<=(a+b) || d<=(a+c) || d<=(b+c))
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}


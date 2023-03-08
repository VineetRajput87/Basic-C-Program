// Q.:- Vineet recently started selling a special fruit.
// He has been selling the fruit for X rupees (X is a multiple of 100). He earns a profit of Y rupees on selling the fruit currently.

// Vineet decided to increase the selling price by 10%. Please help him calculate his new profit after the increase in selling price.
// Note that only the selling price has been increased and the buying price is same.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    printf("%d\n",(a/10)+b);
	}
	return 0;
}


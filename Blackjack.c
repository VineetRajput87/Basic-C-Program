// Q.:- Vineet is playing a variant of Blackjack, where 3 numbers are drawn and each number lies between 1 and 10 (with both 1 and 10 inclusive). Chef wins the game when the sum of these 3 numbers is exactly 21.

// Given the first two numbers A and B, that have been drawn by Vineet, what should be 3-rd number that should be drawn by the Vineet in order to win the game?

// Note that it is possible that Vineet cannot win the game, no matter what is the 3-rd number. In such cases, report −1 as the answer.


#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if((a+b)>=11)
	    printf("%d\n",21-(a+b));
	    else
	    printf("%d\n",-1);
	}
	return 0;
}


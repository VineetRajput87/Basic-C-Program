// Q.:- Vineet is currently standing at stair 0 and he wants to reach stair numbered X.
// Vineet can climb either Y steps or 1 step in one move.
// Find the minimum number of moves required by him to reach exactly the stair numbered X.

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
	    printf("%d\n",a/b);
	    else
	    printf("%d\n",(a/b)+(a%b));
	}
	return 0;
}


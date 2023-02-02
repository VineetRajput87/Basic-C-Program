// Q.:- Vineet participated in a contest and got a rank X.

// Vineet is trying to find his name in the ranklist but there are too many pages.

// Each page consists of 25 participants. Vineet wants to find the exact page number which contains his name.
// Help Vineet find the page number.

#include <stdio.h>

int main(void) 
{
	int a;
	scanf("%d",&a);
	while(a--)
	{
	    int b;
	    scanf("%d",&b);
	    if(b%25==0)
	    printf("%d\n",b/25);
	    else
	    printf("%d\n",(b/25)+1);
	}
	return 0;
}


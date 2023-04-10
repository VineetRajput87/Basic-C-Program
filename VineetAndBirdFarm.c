// Q.:- In Iceland, each chicken has X legs and each duck has Y legs. Vineet's farm can have exactly one type of bird.
// Given that the birds on the farm have a total of Z legs:
// 1. Print CHICKEN, if the farm can have only chickens but not ducks.
// 2. Print DUCK, if the farm can have only ducks but not chickens.
// 3. Print ANY, if the farm can have either chickens or ducks.
// 4. Print NONE, if the farm can have neither chickens nor ducks.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(c%a==0 && c%b==0)
	    printf("ANY\n");
	    else if(c%a==0)
	    printf("CHICKEN\n");
	    else if(c%b==0)
	    printf("DUCK\n");
	    else
	    printf("NONE\n");
	}
	return 0;
}


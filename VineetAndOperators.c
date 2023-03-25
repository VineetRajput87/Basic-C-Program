// Q.:- Vineet has just started Programming, he is in first year of Engineering. Vineet is reading about Relational Operators.
// Relational Operators are operators which check relationship between two values. 
// Given two numerical values A and B you need to help Vineet in finding the relationship between them that is,First one is greater than second or, First one is less than second or, First and second one are equal.

#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a<b)
	    printf("<\n");
	    else if(a>b)
	    printf(">\n");
	    else
	    printf("=\n");
	}
	return 0;
}


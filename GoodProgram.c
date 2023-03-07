// Q.:- In computing, the collection of four bits is called a nibble.

// Vineet defines a program as:
// Good, if it takes exactly X nibbles of memory, where X is a positive integer.
// Not Good, otherwise.
// Given a program which takes N bits of memory, determine whether it is Good or Not Good.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a%4==0)
	    printf("Good\n");
	    else
	    printf("Not Good\n");
	}
	return 0;
}


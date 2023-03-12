// Q.:- Vineet has started studying for the upcoming test. The textbook has N pages in total. Chef wants to read at most X pages a day for Y days.
// Find out whether it is possible for Vineet to complete the whole book.

#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if((b*c)>=a)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}


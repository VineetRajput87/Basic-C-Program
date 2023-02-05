// Q.:- Vineet received N candies on his birthday. He wants to put these candies in some bags. A bag has K pockets and each pocket can hold at most M candies. Find the minimum number of bags Vineet needs so that he can put every candy into a bag.

#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a%(b*c)==0)
	    printf("%d\n",a/(b*c));
	    else
	    printf("%d\n",(a/(b*c))+1);
	}
	return 0;
}


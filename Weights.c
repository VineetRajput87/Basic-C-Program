// Q.:- Vineet is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights.
// If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a==b || a==c || a==d || a==(b+c) || a==(b+d) || a==(c+d) || a==(b+c+d))
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}


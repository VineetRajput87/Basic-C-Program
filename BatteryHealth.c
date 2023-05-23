// Q.:- Apple considers any iPhone with a battery health of 80% or above, to be in optimal condition.
// Given that your iPhone has X% battery health, find whether it is in optimal condition. 
#include <stdio.h>
int main(void) 
{  
	int t;
	scanf("%d",&t);
	while(t--) 
	{ 
	    int a;
	    scanf("%d",&a);
	    if(a>=80) 
	    printf("YES\n");
	    else 
	    printf("NO\n");
	}
	return 0;
}


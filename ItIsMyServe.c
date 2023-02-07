// Q.:- Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 2 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 
// And the game continues After the score reaches P and Q for Alice and Bob respectively, both the players forgot whose serve it is. Help them determine whose service it is.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if((a+b)%4==0 || (a+b)%4==1)
        printf("ALICE\n");
        else
        printf("BOB\n"); 
	}
	return 0;
}


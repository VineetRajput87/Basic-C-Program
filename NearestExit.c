// Q.:- There are two exits in a bus with 100 seats:
// First exit is located beside seat number 1.
// Second exit is located beside seat number 100.
// Seats are arranged in a straight line from 1 to 100 with equal spacing between any 2 adjacent seats.

// A passenger prefers to choose the nearest exit while leaving the bus.

// Determine the exit taken by passenger sitting on seat X.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a<=50)
	    printf("LEFT\n");
	    else
	    printf("RIGHT\n");
	}
	return 0;
}


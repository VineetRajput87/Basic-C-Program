// Q.:- The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(∣X1−X2∣,∣Y1−Y2∣).

// You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance.
// Note that, ∣P∣ denotes the absolute value of integer P. For example, ∣−4∣=4 and  ∣7∣=7.

#include <stdio.h>

int main(void)  
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d,temp,temp1;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    temp =a-c;
	    temp1=b-d;
	    if(temp<0)
	    temp=temp*-1;
	    
	    if(temp1<0)
	    temp1=temp1*-1;
	    
	    if(temp>temp1)
	    printf("%d\n",temp);
	    else
	    printf("%d\n",temp1);
	}
	return 0;
}


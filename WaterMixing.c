// Q.:- Vineet is setting up a perfect bath for himself. He has X litres of hot water and Y litres of cold water.
// The initial temperature of water in his bathtub is A degrees. On mixing water, the temperature of the bathtub changes as following:

// The temperature rises by 1 degree on mixing 1 litre of hot water.
// The temperature drops by 1 degree on mixing 1 litre of cold water.
// Determine whether he can set the temperature to B degrees for a perfect bath.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a<b)
	    {
	        if(b-a<=c)
	        printf("YES\n");
	        
	        else 
	        printf("NO\n");
	    }     
	    
	    else if(a==b)
	    printf("YES\n");
	    
	    else 
	    {
	        if(a-b<=d)
	        printf("YES\n");
	        
	        else 
	        printf("NO\n");
	    }
	}
	return 0;
}


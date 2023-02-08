// Q.:- Vineet's phone has a total storage of S MB. Also, Vineet has 2 apps already installed on his phone which occupy X MB and Y MB respectively.

// He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed on his phone. 
// Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d,temp;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    temp=b+c;
	    temp=a-temp;
	    if(temp>=d)
	    printf("%d\n",0);
	    else if(temp<d)
	    {
	        if((a-b)>=d || (a-c)>=d)
	        printf("%d\n",1);
	        else
	        printf("%d\n",2);
	    }
	}
	return 0;
}


// Q.:- Vineet considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. You are given the temperature C, find whether the climate is HOT or COLD.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a>20)
	    printf("HOT\n");
	    else
	    printf("COLD\n");
	}
	return 0;
}


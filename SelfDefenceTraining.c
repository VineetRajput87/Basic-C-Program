// Q.:- After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defence techniques.

// The only condition for a woman to be eligible for the special training is that she must be between 10 and 60 years of age, inclusive of both 10 and 60.

// Given the ages of N women in his village, please help San Te find out how many of them are eligible for the special training.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,count=0;
	    scanf("%d",&a);
	    int arr[a];
	    for(int i=0;i<a;i++)
	    {
	        scanf("%d",&arr[i]);
	        if(arr[i]>=10 && arr[i]<=60)
	        count++;
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}


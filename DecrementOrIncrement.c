// Q.:- Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4ℎ otherwise decrement its value by 1.

#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	if(t%4==0)
	printf("%d\n",t+1);
	else
	printf("%d\n",t-1);
	return 0;
}


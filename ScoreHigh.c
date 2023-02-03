// Q.:- Vineet is taking a tough examination. The question paper consists of N objective problems and each problem has 4 options A,B,C, and D, out of which, exactly one option is correct.

// Since Vineet did not study for the exam, he does not know the answer to any of the problems. Chef was looking nearby for help when his friend somehow communicated the following information:

// Exactly N A problems have option A as the answer.
// Exactly N_B problems have option B as the answer.
// Exactly N_C problems have option C as the answer.
// Exactly N_D  problems have option D as the answer.

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b[4],temp=0,i;
	    scanf("%d",&a);
	    for(i=0; i<4; i++)
	    {
	        scanf("%d",&b[i]);
	        if(temp<b[i])
	        temp=b[i];
	        else
	        continue;
	    }
	    printf("%d\n",temp);
	    
	}
	return 0;
}


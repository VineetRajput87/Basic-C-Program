#include<stdio.h> 
int main()
{
    char ch;
    printf("Enter A Character : ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122) 
     printf("The %c is in Small Letter\n",ch);
    else if(ch>=65 && ch<=90)
     printf("The %c is in Capital Letter\n",ch);
    else if(ch>=48 && ch<=57) 
     printf("The %c is in Digit Form\n",ch);
    else 
     printf("The %c is a Specil Character",ch);
return 0;
}

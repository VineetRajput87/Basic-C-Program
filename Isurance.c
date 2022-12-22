#include<stdio.h>
int main()
{
    int age;
    char Marital_status;
    char gender;
    printf("Give your Details\n\n");
    printf("Enter your Gender : ");
    scanf("%c",&gender);
    printf("Are You Married : ");
    fflush(stdin);
    scanf("%c",&Marital_status);
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if( (((Marital_status=='m' || Marital_status=='M') && (gender=='m' || gender=='M')) || ((Marital_status=='m' || Marital_status=='M') && (gender=='f' || gender=='F'))) && age>18 )
    {
    printf("INSURANCE PROVIDED");
    }
    else if((((Marital_status=='u' || Marital_status=='U') && (gender=='m' || gender=='M') && age>40 ) || (age>35 && (Marital_status=='u' || Marital_status=='U') && (gender=='f' || gender=='F'))))
    {
    printf("INSURANCE PROVIDED");
    }
    else 
    {
    printf("SORRY WE CAN'T GIVE YOU INSURANCE");
    }
    return 0;
}
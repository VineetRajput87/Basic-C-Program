#include<stdio.h>
#include<conio.h>
int car=0,bus=0,cycle=0,motorcycle=0,riksha=0,truck=0;
int a=0,b=0,c=0,d=0,e=0,f=0;
void truckk()
{
  int truc;
  clrscr();
  printf("Number of Truck : ");
  scanf("%d",&truc);
  truck=truc*400;
  a=a+truc;
}
void buss()
{
 int bs;
 clrscr();
 printf("Number of Bus : ");
 scanf("%d",&bs);
 bus=bs*200;
 b+=bs;
}
void carr()
{
  int ca;
  clrscr();
  printf("Number of Car : ");
  scanf("%d",&ca);
  car=ca*150;
  c+=ca;
}
void rikshaa()
{
  int rik;
  clrscr();
  printf("Number of Riksha : ");
  scanf("%d",&rik);
  riksha=rik*100;
  d+=rik;
}
void motorcyclee()
{
  int mot;
  clrscr();
  printf("Number of Motorcycle : ");
  scanf("%d",&mot);
  motorcycle=(mot*50);
  e+=mot;
}
void cyclee()
{
  int cyc;
  clrscr();
  printf("Number of Cycle : ");
  scanf("%d",&cyc);
  cycle=cyc*20;
  f+=cyc;
}
void display()
{
 clrscr();
 printf("Showing The Parking Details \n\n");
 if(a>0)
 printf("Truck/Lorry : %d",a);
 if(b>0)
 printf("\nBus/Mini Bus : %d",b);
 if(c>0)
 printf("\nCar/Jeep/Van : %d",c);
 if(d>0)
 printf("\nRiksha : %d",d);
 if(e>0)
 printf("\nMotorcycle : %d",e);
 if(f>0)
 printf("\nCycle : %d\n",f);
 printf("\n\nThe Total Amount Collected : %d",(truck+bus+car+riksha+cycle+motorcycle));
 getch();
}
void main()
{
 int choice;
 clrscr();
 do{
 clrscr();
 printf("Welcome In Parking Area \n\n");
 printf("1.Truck/Lorry\n2.Bus/Mini Bus\n3.Car/Jeep/Van\n4.Riksha\n5.Motorcycle\n");
 printf("6.Cycle\n7.Display Status\n8.Start New Day\n9.Exit\n\n");
 printf("Enter Your Choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
  case 0:

  case 1:
	 truckk();
	 break;
  case 2:
	 buss();
	 break;
  case 3:
	 carr();
	 break;
  case 4:
	 rikshaa();
	 break;
  case 5:
	 motorcyclee();
	 break;
  case 6:
	 cyclee();
	 break;
  case 7:
	 display();
	 break;
  case 9:
	 choice=9;
	 break;
  case 8:
	 car=0,bus=0,cycle=0,motorcycle=0,riksha=0,truck=0;
	 a=0,b=0,c=0,d=0,e=0,f=0;
	 break;
  default :
	 clrscr();
	 printf("WRONG INPUT TRY AGAIN !\n");
	 getch();
 }
 }
 while(choice!=9);
 getch();
}

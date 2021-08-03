#include<iostream.h>
#include<conio.h>
char name[20];
int roll_no;
//basic structure
void getName()
{
  cin>>name;
}

void getRoll()
{
  cin>>roll_no;
}

void main()
{
  getName();
  getRoll();
  getch();
}



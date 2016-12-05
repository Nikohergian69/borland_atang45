#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int a,b;
char lagi;
atas:
clrscr();
cout<<"masukan bilangan=";
cin>>a;
b=a%2 ;
printf("nilai %d %% 2 adalah=%d",a,b);
printf("\n\n ingin hitung lagi [Y/T]:");
lagi= getch();
if(lagi == 'y' || lagi == 'y')
 goto atas;
 getch();
 }

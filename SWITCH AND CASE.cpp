#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main ()
{
char kode,lagi;
atas:
clrscr();
cout<<"INPUT KODE BARANG[A..C]:";
kode=getche();
cout<<'\n';
switch(kode)
	{
   case'A':
   case 'a':
   cout<<"alat olahraga";
   break;
   case'B':
   case'b':
   cout<<"alat elektronik";
   break;
   case'C':
   case'c':
   cout<<"alat masak";
   break;

   default:
    cout<<"anda salah memasukan kode";
    }
    cout<<'\n';
    cout<<"\ningin pilih lagi [Y/T]:";
    lagi=getche();
    if(lagi =='Y'||lagi =='Y')
    	goto atas;

      getch();
      }

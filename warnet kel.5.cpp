#include <conio.h>
#include <iostream.h>
#include <stdio.h>


main() {

int username,password;
int login;

login=1;
do {

clrscr();
cout<<"\n**************************************";
cout<<"\n\tPORTAL WARNET CNET NHOT";
cout<<"\n\t    Silahkan Log in";
cout<<"\n**************************************";


int  rohman=12162304;
int  mega=12161382;
int  dinda=12165964;
int  jhoe=12163548;
int  novia=12161393;
int  pass=260696;

	cout<<"\nUser name : ";cin>>username;
   cout<<"\nPassword  : ";cin>>password;

   if(username==rohman&&password==pass)
   {
   goto awal;

   }
   else if(username==mega&&password==pass)
   {
   goto awal;
   }

   else if(username==dinda&&password==pass)
   {
   goto awal;
   }

   else if(username==novia&&password==pass)
   {
   goto awal;
   }

   else if(username==jhoe&&password==pass)
   {
   goto awal;
   }
   else
   login=login+1;
  }
while(login<=3);
cout<<"\nGagal log in 3 x, akun anda kami blokir";
cout<<"\nTekan sembarang untuk Exit";


int keluar;
keluar=getche();
if(keluar=='y'||keluar=='Y')
{
goto exit;
}

else
{
goto exit;
}

int No_komputer,sewa;
char user[15];
int lagi,rincian;

awal:
clrscr();

cout<<"\n**************************************";
cout<<"\n\SELAMAT DATANG DI WARNET CNET NHOT";
cout<<"\n\tSilahkan Input data";
cout<<"\n**************************************";
cout<<"\nNo Komputer   :  ";cin>>No_komputer;
cout<<"\nNama Pemakai  :  ";gets(user);
cout<<"\nIngin  Sewa   :  ";cin>>sewa;
cout<<"\n**************************************";
cout<<endl;

cout<<"\nCetak Rincian Tagihan [Y|T]";

rincian=getche();
if(rincian=='y'||rincian=='Y')
{
goto struk;
}

else
{
goto exit;
}



struk:
clrscr();

cout<<"\n--------------------------------------";
cout<<"\n\tSTRUCK CNET NHOT             ";
cout<<"\n--------------------------------------";
cout<<"\nNo Komputer   :  "<<No_komputer;
cout<<"\nNama Pemakai  :  "<<user;
cout<<"\nLama Pakai    :  "<<sewa<<" Jam";

int potongan,bayar,harga;
harga=3000;
bayar=sewa*harga;

cout<<"\nHarga per jam :  Rp"<<harga;
cout<<"\nBiaya         :  Rp."<<bayar;
if(sewa>3)
{
potongan=bayar*0.2;
}

else
{
potongan=0;
}
cout<<"\nPotongan      :  Rp."<<potongan;


cout<<"\n--------------------------------------";
int tb;
tb=bayar-potongan;

cout<<"\nTotal Bayar   :  Rp."<<tb;
cout<<"\n--------------------------------------";
int tunai,kembalian;
cout<<"\nTunai         :  Rp.";cin>>tunai;

kembalian=tunai-tb;
cout<<"\nKembalian     :  Rp."<<kembalian;
cout<<"\n--------------------------------------";
cout<<endl;

cout<<"\n\tT E R I M A  K A S I H";
cout<<"\n\tMau Input Lagi ? [Y|T]";

lagi=getche();
if(lagi == 'Y'||lagi == 'y')
{
goto awal;
}

else
{
goto exit;
}


getch();
exit:
}

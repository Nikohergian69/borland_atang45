#include<conio.h>
#include<iostream.h>
main()
{
int bill;
cout<<"\t\t Latihan Perulangan c++ dengan For "<<endl;
cout<<"\t========================================"<<endl;
cout<<"\n 1.Menampilkan deret Angka 1 sampai 10 : ";
for(bill=0;bill<=10;bill++)
{
cout<<bill;
}

cout<<"\n 2.Menampilkan deret bilangan genap dari angka 1 sampi 10 : ";
for(bill=0;bill<=10;bill+=2)
{
cout<<bill;
}

cout<<"\n 3.Menampilkan deret bilangan ganjil dari angka 1 sampi 10 : ";
for(bill=1;bill<=10;bill+=2)
{
cout<<bill;
}

getch();
}

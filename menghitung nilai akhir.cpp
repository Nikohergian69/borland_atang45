#include <stdio.h>
#include <conio.h>
#include <iostream>

main()
{
float nilai_t,nilai_a,nilai_us,nilai_ua,nilai_ak;
cout<<"MASUKAN NILAI MAHASISWA "<<endl;
cout <<"masukan nilai tugas : "; cin >>nilai_t;
cout <<"masukan nilai absen : "; cin >>nilai_a;
cout <<"masukan nilai uts : "; cin >>nilai_us;
cout <<"masukan nilai uas : "; cin >>nilai_ua;
nilai_ak=(0.1*nilai_t)+(0.2*nilai_a)+(0.3*nilai_us)+(0.4*nilai_ua);
cout <<"=======HASIL AKHIR========"<<endl;
cout <<"Nilai akhir anda adalah "<<nilai_ak<<endl;

getch();
}
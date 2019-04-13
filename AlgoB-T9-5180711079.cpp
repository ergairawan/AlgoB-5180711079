#include <iostream>
using namespace ::std;
struct nilai {
double a,absen;
int uts, uas, tugas,grade;
float hasil;
string nama, nim;
};

nilai mhs;

void input ()
{
    cout<<"\nMasukkan data Mahasiswa : ";
    cout<<"\nNama     : ";
    cin>>mhs.nama;
    cout<<"NIM      : ";
    cin>>mhs.nim;
}

void nilai ()
{
    cout<<"\nUTS        : ";
    cin>>mhs.uts;
    cout<<"UAS          : ";
    cin>>mhs.uas;
    cout<<"Tugas        : ";
    cin>>mhs.tugas;
    cout<<"Absen        : ";
    cin>>mhs.absen;



}
void total ()
{
    mhs.hasil=(mhs.uts*0.20)+(mhs.uas*0.30)+(mhs.tugas*0.35)+(mhs.absen*0.15);
    cout<<"\nHasil nilai : "<<mhs.hasil;
    cout<<"\nGrade : ";

    if (mhs.hasil >=81)cout<<"A";
    else if (mhs.hasil>=61)cout<<"B";
    else if (mhs.hasil>=41)cout<<"C";
    else if (mhs.hasil>=21)cout<<"D";
    else if (mhs.hasil>=0)cout<<"E";

}

void output ()
{
    cout<<"\nUTS    : "<<mhs.uts;
    cout<<"\nUAS    : "<<mhs.uas;
    cout<<"\nTugas  : "<<mhs.tugas;
    cout<<"\nAbsen  : "<<mhs.absen;
    cout<<"\nHasil  : "<<mhs.hasil;
    cout<<"\nGrade  : ";
     if (mhs.hasil >=81) cout<<"A";
    else if (mhs.hasil>=61)cout<<"B";
    else if(mhs.hasil>=41) cout<<"C";
    else if (mhs.hasil>=21) cout<<"D";
    else cout<<"E";

}

main()
{ string x;
    do
    {cout<<"Program untuk Menghitung Nilai ";
    input ();
    nilai();
    total();
    output();
    cout<<"\nApakah ingin mencoba lagi ?";
    cin>>x;
}
while (x=="y");
}

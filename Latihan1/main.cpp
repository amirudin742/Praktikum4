#include <iostream>

using namespace std;
int main()
{
char pembelian;
int kode, N, jumlah, banyak;
long int total,diskon,akhir, bayar, harga,duit,kembalian;
atas:
cout<<"   ===================AMIRUDIN TOKO SPORT==================\n";
cout<<"\n";
cout<<"       HARGA TERJANGKAU, KUALITAS TERJAMIN\n";
cout<<"\n";
cout<<" ======================DAFTAR BARANG=======================\n";
cout<<" 1. Sepatu Bola\n";
cout<<" 2. Sepatu Futsal\n";
cout<<" 3. Sarung Kaki\n";
cout<<" 4. Seragam\n";
cout<<" 5. Net\n";
cout<<" 6. Deker\n";
cout<<" 7. Bola\n";
cout<<" 8. Tropi\n";
cout<<" 9. Bola Voly\n";
cout<<" 10.Bola Basket\n";
cout<<" 11.Raket\n";
cout<<"===================AMIRUDIN TOKO SPORT====================\n";
cout<<"\n";
cout<<"Jumlah Barang Yang Dipesan = ";
cin>>banyak;
jumlah=1;
bayar=0;
for(jumlah=1;jumlah<=banyak;jumlah++)
{ulang:
 cout<<" \n\nMasukan Kode Barang = ";
cin>>kode;
cout<<"\n";
    if (kode==1)
{
    cout<<" Nama Barang     = Sepatu Bola\n";
    cout<<" Harga           = Rp. 200000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=200000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==2)
{
    cout<<" Nama Barang     = Sepatu Futsal\n";
    cout<<" Harga           = Rp. 100000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=100000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==3)
{
    cout<<" Nama Barang     = Sarung Kaki\n";
    cout<<" Harga           = Rp. 50000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=50000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==4)
{
    cout<<" Nama Barang      = Seragam\n";
    cout<<" Harga            = Rp. 250000,-\n";
    cout<<" Jumlah Barang    = ";
    cin>>N;
    harga=250000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==5)
{
    cout<<" Nama Barang     = Net\n";
    cout<<" Harga           = Rp. 500000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=500000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==6)
{
    cout<<" Nama Barang     = Deker\n";
    cout<<" Harga           = Rp. 35000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=35000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==7)
{
    cout<<" Nama Barang     = Bola\n";
    cout<<" Harga           = Rp. 280000,-\n";
    cout<<" Jumlah Baran    = ";
    cin>>N;
    harga=280000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==8)
{
    cout<<" Nama Barang     = Tropi\n";
    cout<<" Harga           = Rp. 170000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=170000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==9)
{
    cout<<" Nama Barang     = Bola Voly\n";
    cout<<" Harga           = Rp. 370000\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=370000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==10)
{
    cout<<" Nama Barang     = Bola Basket\n";
    cout<<" Harga           = Rp. 420000\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=420000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==11)
{
    cout<<" Nama Barang     = Raket\n";
    cout<<" Harga           = Rp. 600000\n";
    cout<<" Jumlah Barang = ";
    cin>>N;
    harga=600000;
    total=harga*N;
    cout<<" Total Harga = Rp" << total;
    cout<<"\n";
}
else
{
    cout<<"-Invalid Number-\a";
goto ulang;
}
bayar=bayar+total;
}
    cout<<"\nTotal Bayar\t\t        = Rp"<<bayar<<",-";
    cout<<"\n\n\Masukan Pembayaran  = Rp";cin>>duit;
if((bayar>1000000)){
diskon = bayar*0.10;
cout<<"\nKamu Dapat Diskon 10%\t";
}else
    if((bayar>=501000)&& (bayar<=1000000)){
diskon = bayar*0.05;
cout<<"\nKamu Dapat Diskon 5%\t";
}else
    if((bayar<501000)){
diskon = 0;
cout<<"\nKamu Dapat Diskon 0%\t";
}
else {
diskon = 0;
}
akhir       =bayar-diskon;
kembalian   =duit-akhir;

cout<<"\nKamu Dapat Diskon\t  = Rp"<<diskon<<",-";
cout<<"\nCash Back\t          = Rp"<<kembalian<<",-";
cout<<"\n\n\t\t\t((((TERIMA KASIH))))";
cout<<"\n\n\n\n\nPembelian Baru [y/t] ";cin>>pembelian;
if (pembelian=='y'||pembelian=='Y')
goto atas;
else
cout<<"\n\n\t\t\tProgram Logging Off....";
}


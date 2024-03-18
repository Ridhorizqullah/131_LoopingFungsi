#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "masukkan nama =";
    cin >> nama;
    cout << "masukkan jumlah Telor = ";
    cin >> nTelor;
    cout << "masukkan jumlah Mie = ";
    cin >> nMie;
    cout << "masukkan jumalah Air = ";
    cin >> nAir;

}

int hitungHarga() {
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
    cout << "nama =" << nama << endl;
    cout << "jumlah Telor = " << nTelor << endl;
    cout << "jumlah Mie = " << nMie << endl;
    cout << "jumlah Air = " << nAir << endl;
    cout << "Total harga Rp. " << hitungHarga() << endl;
}
int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout << "apakah anda ingin mengulangi lagi? (y/n)";
        cin >> pilihan;

        system("cls");

    } while (pilihan == 'y' || pilihan == 'Y');


}
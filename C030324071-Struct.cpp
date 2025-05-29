#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void inputData(string *nim,string *nama,string *alamat,float *ipk){
    system("cls");
    cout << "=== Silahkan input data mahasiswanya ===\n" << endl;
    cout << "Nama \t: "; getline(cin, *nama);
    cout << "Nim \t: "; cin >> *nim;
    cout << "Alamat \t: "; getline(cin.ignore(), *alamat);
    cout << "Ipk \t: "; cin >> *ipk;
    cout << "\n\nTekan enter untuk melanjutkan..."; getch();
}

void outputData(mahasiswa kelas){
    system("cls");
    cout << "=== Berikut data yang telah anda input ===\n" << endl;
    cout << "Nama \t: " << kelas.nama << endl;
    cout << "Nim \t: " << kelas.nim << endl;
    cout << "Alamat \t: " << kelas.alamat << endl;
    cout << "Ipk \t: " << kelas.ipk << endl;
    cout << "\n\nTekan enter untuk melanjutkan..."; getch();
}

int main(){
    mahasiswa ti2b;
    
    string *nim = &ti2b.nim;
    string *nm = &ti2b.nama;
    string *almt = &ti2b.alamat;
    float *ipk = &ti2b.ipk;

    inputData(nim, nm, almt, ipk);
    outputData(ti2b);
}
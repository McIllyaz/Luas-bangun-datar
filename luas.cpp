#include<iostream>
using namespace std;

int main(){
    int p,
        l,
        j,
        d;
    
    char bd,
         kl,
         dj;
    
    cout << "============================================\n";
    cout << "Selamat datang di aplikasi penghitung luas:) \nPilih bangun datar:\n1. Persegi\n2. Lingkaran\n";
    cin >> bd;
    cout << "============================================\n";
    
    switch(bd){
        case '1':
        cout << "Apa yang ingin anda hitung?\n1. Luas\n2. Keliling\n";
        cin >> kl;
        if(kl == '1'){
            cout << "=============================\n";
            cout << "Masukkan panjang: ";
            cin >> p;
            cout << "Masukkan lebar\t: ";
            cin >> l;

            int hasil = p * l;
            cout << "Hasilnya adalah\t: " << hasil << endl;
            cout << "=============================";
        }else{
            cout << "=============================\n";
            cout << "Masukkan panjang: ";
            cin >> p;
            cout << "Masukkan lebar\t: ";
            cin >> l;

            int hasil = 2*(p+l);
            cout << "Hasilnya adalah\t: " << hasil << endl;
            cout << "=============================";
        }
        
        case '2':
        cout << "Apa yang ingin anda hitung?\n1. Luas\n2. Keliling\n";
        cin >> kl;
        if(kl == '1'){
            cout << "=============================\n";
            cout << "Masukkan jari-jari: ";
            cin >> j;

            float hasil = 22 * j * j / 7;
            cout << "Hasilnya adalah\t: " << hasil << endl;
            cout << "=============================";
        }else{
            cout << "===========================================================\n";
            cout << "Apa yang anda ketahui?\n1. Diameter lingkaran\n2. Jari-jari\n";
            cin >> dj;
            if(dj == '2'){
                cout << "=============================\n";
                cout << "Masukkan jari-jari: ";
                cin >> j;

                float hasil = 2*(22 * j / 7);
                cout << "Hasilnya adalah\t: " << hasil << endl;
                cout << "=============================";
            }else{
                cout << "=============================\n";
                cout << "Masukkan diameter: ";
                cin >> d;

                float hasil = 22 * d / 7;
                cout << "Hasilnya adalah\t: " << hasil << endl;
                cout << "=============================";
            }
        }
    }
}
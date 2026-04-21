#include <iostream>
using namespace std;

class barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
    void tampilSpek(){
        cout << "Nama Barang : " << nama << endl;
        cout << "jumlah barang : " << jumlah << endl;
        cout << "kategori barang : " << kategori << endl;
        cout << "tanggal produksi : " << tanggalProduksi << endl;
    }
    
};

int main(){
    barang elektronik; 
    barang nonelektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "1945-08-17";
    elektronik.tampilSpek();

    cout << endl;

    nonelektronik.nama = "supersemar";
    nonelektronik.jumlah = 1;
    nonelektronik.kategori = "non elektronik";
    nonelektronik.tanggalProduksi = "1970-03-11";
    nonelektronik.tampilSpek();
}
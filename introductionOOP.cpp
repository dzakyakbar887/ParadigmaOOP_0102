#include <iostream>
using namespace std;

class mahasiswa{ //blue print atau cetakan
    public: 
int nim;
string nama;
float nilai;

void printData(){
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nilai : " << nilai << endl;
}
}; //batas class

int main(){
    mahasiswa mhs;//object
 
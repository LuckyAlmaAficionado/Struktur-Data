#include<iostream>
#include<string> // untuk si data tipe

using namespace std;

// deklarasi sebagai class
// public: dapat di akses oleh siapapun diluar class
// private: dapat di akses oleh siapapun didalam class
// protected: ? 
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(int argc, char const *argv[])
{   
    Mahasiswa data1;
    Mahasiswa data2;
    data1.nama = "Lucky";
    data1.NIM = "A11.2020.12797";
    data1.jurusan = "Teknik Informatika";
    data1.IPK = 3.40;
    data2.nama = "Alma";
    cout << "nama dari data1: " << data1.nama << endl;
    cout << "NIM dari data1: " << data1.NIM << endl;
    cout << "jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << endl;

    
    return 0;
}
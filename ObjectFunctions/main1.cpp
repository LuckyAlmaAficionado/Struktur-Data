#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    string jurusan;

public:
    string name;
    Mahasiswa(string aName, string aJurusan)
    {
        name = aName;
        getIPK(aJurusan);
    }

    void getIPK(string aJurusan)
    {
        cout << aJurusan << endl;
    }
};

int main()
{
    Mahasiswa mhs1("lucky", "perkebunan");

    // mhs1.getIPK("Teknik infirmatikan");

    return 0;
}
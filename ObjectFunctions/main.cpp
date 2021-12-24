#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string name;
    double IPK;
    Mahasiswa(string aName, double aIPK)
    {
        name = aName;
        IPK = aIPK;
    }

    void checkIPK()
    {
        if (IPK > 2)
        {
            cout << "memuaskan." << endl;
        }
        else
        {
            cout << "kurang memuaskan." << endl;
        }
    }
};

int main()
{
    Mahasiswa mhs1("lucky", 4);
    Mahasiswa mhs2("alma", 1.9);

    mhs1.checkIPK();
    mhs2.checkIPK();
    return 0;
}
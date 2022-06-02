#include <iostream>
using namespace std;

int main()
{

    float IPK = 2.5;
    string nilai = "C";
    string nilaiMKWU = "C";
    int SPNA = 30;
    string nilaiMKWP = "D";
    // mengikuti == true / tidak mengikuti == false
    bool MKPN = true;
    string NU = "D";
    int tingkat = 1;
    // A
    if (IPK >= 2.5)
    {
        // B
        if (nilai == "A" || nilai == "B" || nilai == "C")
        {
            // C
            if (nilaiMKWU == "A" || nilaiMKWU == "B" || nilaiMKWU == "C")
            {
                // D
                // SPNA = skor pelanggaran akademik
                if (SPNA <= 30)
                {
                    // No. 6A
                    if (nilaiMKWP == "A" || nilaiMKWP == "B" || nilaiMKWP == "C" || nilaiMKWP == "D")
                    {
                        // No. 6B
                        // MKPN = mengikuti Ketentuan Perbaikan Nilai
                        if (MKPN == true)
                        {
                            NU = "C";
                        }
                        else
                        {
                            if (tingkat == 1)
                            {
                                cout << "Drop Out" << endl;
                            }
                            else
                            {
                                cout << "Mengulang" << endl;
                            }
                        }
                    }
                    else
                    {
                        if (tingkat == 1)
                        {
                            cout << "else mkwp" << endl;
                            cout << "Drop Out" << endl;
                        }
                        else
                        {
                            cout << "Mengulang" << endl;
                        }
                    }
                }
                else
                {
                    if (tingkat == 1)
                    {
                        cout << "else spna" << endl;
                        cout << "Drop Out" << endl;
                    }
                    else
                    {
                        cout << "Mengulang" << endl;
                    }
                }
            }
            else
            {
                if (tingkat == 1)
                {
                    cout << "ELSE MKWU" << endl;
                    cout << "Drop Out" << endl;
                }
                else
                {
                    cout << "Mengulang" << endl;
                }
            }
        }
        else
        {
            if (tingkat == 1)
            {
                cout << "ELSE NILAI" << endl;
                cout << "Drop Out" << endl;
            }
            else
            {
                cout << "Mengulang" << endl;
            }
        }
    }
    else
    {
        if (tingkat == 1)
        {
            cout << "ELSE IPK" << endl;
            cout << "Drop Out" << endl;
        }
        else
        {
            cout << "Mengulang" << endl;
        }
    }

    cout << NU << endl;
    return 0;
}
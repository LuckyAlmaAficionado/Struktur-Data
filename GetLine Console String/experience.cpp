#include<iostream>
using namespace std;

int main(){
    string kalimat_input;

    cout << "Input kalimat: ";
    getline(cin, kalimat_input);

    int posisi;
    int jumlah = 0;

    while (true){
        posisi = kalimat_input.find("a",posisi+1);
        jumlah++;
        if(posisi < 0){
            break;
        }
    }

    cout << "Jumlah kata : " << jumlah << endl;


    return 0;
}
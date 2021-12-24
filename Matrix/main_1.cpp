#include <iostream>

using namespace std;

/**
 * contoh: menggunakan matriks ordo 3 X 3
 * dengan syarat matriks harus berupa matriks persegi atau baris dan kolom sama.
 */
const int baris = 2;
const int kolom = 2;

void determinan_matriks(float data[baris][kolom]);

int main() {
  // float matriks[baris][kolom] = {{1, 2, 1}, {3, 3, 1}, {2, 1, 2}};
  float matriks[baris][kolom] = {{3, 1}, {2, 5}};

  determinan_matriks(matriks);
}

void determinan_matriks(float data[baris][kolom]) {
  int baris_f = 0; // baris
  int kolom_f = 0; // kolom

  int baris_data = 1; // baris operasi

  int jml_penjumlahan = 0; // jumlah penjumlahan
  int jml_pengurangan = 0; // jumlah pengurangan

  int jml_per_kolom = 1; // jumlah kolom

  bool pengurangan = false;

  /**
   * looping sebanyak 2 kali baris (bisa juga 2 kali kolom) kali baris / kolom
   * dengan tujuan untuk operasi baris penjumlahan dan pengurangan
   * syarat: untuk mencari determinan hanya bisa di matriks persegi atau baris dan kolomnya sama
   */
  for (int b = 0; b < (baris * (baris * 2)); b++) { // ex: ordo 3 x 3, maka 3 * (3 * 2) = 18 data
    if (pengurangan == false) if (kolom_f >= baris) kolom_f = 0;
    if (kolom_f < 0) kolom_f = baris - 1;

    jml_per_kolom *= data[baris_f][kolom_f];

    if (baris_f != baris) {
      baris_f++;
      if (pengurangan == false) kolom_f++;
      if (pengurangan == true) kolom_f--;
    }

    for (int c = 1; c <= (baris * 2); c++) {
      if (b == ((baris * c) - 1)) {
        if (pengurangan == false) jml_penjumlahan += jml_per_kolom;
        else jml_pengurangan += jml_per_kolom;

        if (baris_data == baris) {
          pengurangan = true;
          baris_data = baris - 1;
          kolom_f = baris_data;
        } else {
          if (pengurangan == true) {
            baris_data--;
            kolom_f = baris_data;
          } else {
            kolom_f = baris_data;
            baris_data++;
          }
        }

        jml_per_kolom = 1;
        baris_f = 0;
      }
    }
  }

  cout << "Determinan (" << jml_penjumlahan << " - " << jml_pengurangan << ") = " << jml_penjumlahan - jml_pengurangan << "\n";
}
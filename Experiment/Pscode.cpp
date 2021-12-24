// function ToNegative(a : integer) -> integer
// {fungsi untuk mengubah bilangan positive menjadi negative}

// hasil <- integer
// hasil <- a * -1
// return hasil
// {end function}

// {algoritma utama}
// 	A <- integer
// hasil <- integer

// 	hasil <- ToNegativ(A)
// 		output(hasil)
// {end algoritma utama}

#include<iostream>
using namespace std;

int ToNegative(int a){
	int hasil;
	hasil = a*-1;
	return hasil;
}

int main(){
	int a = 10;
	int hasil;
	hasil = ToNegative(a);
	cout << hasil << endl;
}
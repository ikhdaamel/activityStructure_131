#include <iostream>
using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[25];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "masukan NIM :";
		cin >> mhs[i].NIM;
		cout << "masukan Nama :";
		cin >> mhs[i].nama;
		cout << "masukan Alamat :";
		cout << "\n\tMasukan desa :";
		cin >> mhs[i].alamat.desa;
		cout << "\n\tMasukan kota :";
		cin >> mhs[i].alamat.kota;
		cout << "masukan umur :";
		cin >> mhs[i].umur;

	}
}
#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur
};

int main() {
	mahasiswa mhs;

	cout << "masukan NIM :";
	cin >> mhs.NIM;
	cout << "masukan nama :";
	cin >> mhs.nama;
	cout << "alamat :";
	cout << "\tMasukan desa :";
	cin >> mhs.alamat.desa;
	cout << "\tMasukan kota :";
	cin >> mhs.alamat.kota;
	cout << "masukan umur :";
	cin >> mhs.umur;
}
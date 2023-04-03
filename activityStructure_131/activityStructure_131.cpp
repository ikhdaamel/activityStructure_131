#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140131";
	mhs1.nama = "ikhda akmalia";
	mhs1.alamat = "gunungkidul";
	mhs1.umur = 19;

	cout << "masukan NIM :";
	cin >> mhs2.NIM;
	cout << "masukan nama :";
	cin >> mhs2.nama;
	cout << "masukan alamat :";
	cin >> mhs2.alamat;
	cout << "masukan umur :";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.Umur;
}
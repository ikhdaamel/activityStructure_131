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
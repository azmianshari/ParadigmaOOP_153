#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama << "\ Ada \n";
	}
	~pasien() {
		cout << "Pasien \"" << nama << "\ Tidak ada \n";
	}
	void tambahDokter(dokter*);
	void tambahDokter();
};

class dokter {
	string nama;
	vector<pasien*> daftar_pasien;
	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\ Ada \n";
	}
	~dokter() {
		cout << "Dokter \:" << nama << "\ Tidak ada \n";
	}
	void tambahPasien(pasien*);
	void tambahPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void
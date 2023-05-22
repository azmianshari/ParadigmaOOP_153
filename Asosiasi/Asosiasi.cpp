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
	void cetakDokter();
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
	void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl; 
}
void dokter::tambahPasien(pasien* pPasien) {
	daftar_pasien.push_back(pPasien);
}
void dokter::cetakPasien() {
	cout << "Daftar Pasien dari Dokter \"" << this->nama << "\"\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
}

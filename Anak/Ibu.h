#pragma once
#ifndef IBU_H
#define IBU_H
#include <iostream>
#include "Anak.h"
#include <vector>
using namespace std;


class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" Ada\n";
	}

	~ibu() {
		cout << "Ibu \"" << nama << "\" Tidak ada\n";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};

void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}

#endif

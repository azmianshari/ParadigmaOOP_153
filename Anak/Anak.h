#pragma once
#ifndef ANAK_H
#define ANAK_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" Ada \n";
	}
	~anak() {
		cout << "Anak \"" << nama << "\" Tidak ada \n";
	}
};
#endif

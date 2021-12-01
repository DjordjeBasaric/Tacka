#ifndef _tacka_h_
#define _tacka_h_
// heder fajl sluzi da pokaze sta neka kalsa nudi od svojih metoda a ne i da oktrije implementaciju, ako je unutar cpp fajla tako sakrijem klasu
#include <iostream>
using namespace std;
//pragma once menja sve ovo

class Tacka {
//private: podrazumevano
	double x, y;

public:
	void postavi(double a, double b) {
		this->x = a; // x = a; svjedeno je ovo
		this->y = b; // y = b;
	}
	double aps() const { // nemam nikakvu dodelu i uvek ce biti konsatnto
		return this->x; // ili samo x;
	}
	double ord() const { return y; }

	double rastojanje(Tacka t) const;

	void citaj() {
		cin >> x >> y;
	}

	void pisi() const{
		cout << "(" << x << "," << y << ")";
	}

};


#endif // !_tacka_h_

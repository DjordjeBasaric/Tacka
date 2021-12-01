#include <iostream>
#include "tacka.h" // moje hedere i fajlove pisem sa navodniciiam "nesto"

using namespace std;


int main() {
	Tacka t1; // t1 je objekat klase tacka, ako pise const Tacka t1; mogu da se pozivaju samo metode koje su const tj. koje ne menjaju promenljivu u funkciji
	t1.postavi(2, 5);
	cout << t1.aps() << ", " << t1.ord() << endl;
			  /*
	double x, y;
	cin >> x >> y;

	t1.postavi(x, y);

	cout << "Uneta tacka je: ";
	t1.pisi();

	cout << endl;
	Tacka t2;

	t2.citaj();
	cout << "Uneta tacka je:";
	t2.pisi();
	cout << endl;
	cout << "Rastojanje= " << t1.rastojanje(t2) << endl;
	*/

}


// 2.1 Napisati na jeziku C++ klasu tacka u ravni.
// Predvideti: postavljanje i dohvatanje koordinata, izracunavanje rastojanja do zadate tacke,
// citanje tacke i pisanje tacke.
// Napisati na jeziku C++ program za ispitivanje prethodne klase
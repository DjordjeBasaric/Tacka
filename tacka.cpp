#include "tacka.h"
#include <cmath>
using namespace std;

double Tacka::rastojanje(Tacka t) const {
	return sqrt(pow(this->x - t.x, 2) + pow(y - t.y, 2)); // x i y su od Tacke iz tacka.h tj t1.rastojanje(t2) to su od x1
}
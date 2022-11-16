//------------------------------------------------------------------------------
// Circle class declaration and definition
//------------------------------------------------------------------------------
#ifndef CIRCLE_H
#define CIRCLE_H

#include <ostream>
using std::ostream;

class Circle {
private:
	int radius;

	friend ostream& operator<<(ostream& os, Circle& c);

public:
	// constructor
	Circle(int r) : radius(r) {}
	// getters
	int getRadius() const { return radius; }

	// overload operator ==
	//--------------------------------------------------------------------------
	bool operator==(Circle& c2) {
		return this->radius == c2.radius;
	}

	// overload operator >
	//--------------------------------------------------------------------------
	bool operator>(Circle& c2) {
		return this->radius > c2.radius;
	}
};

// overload operator <<
//------------------------------------------------------------------------------
ostream& operator<<(ostream& os, Circle& c) {
	os << "Radius " << c.radius << ' ';
	return os;
}
#endif	// CIRCLE_H

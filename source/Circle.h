//------------------------------------------------------------------------------
// Circle class declaration and definition
//------------------------------------------------------------------------------
#ifndef CIRCLE_H
#define CIRCLE_H

#include <ostream>
using std::ostream;

//------------------------------------------------------------------------------
// Circle
//------------------------------------------------------------------------------
class Circle {
private:
	int radius;

	friend ostream& operator<<(ostream& os, const Circle& c);

public:
	// constructor
	Circle(int r) : radius(r) {}
	// getters
	int getRadius() const { return radius; }

	// overload operator ==
	//--------------------------------------------------------------------------
	bool operator==(const Circle& c2) {
		return this->radius == c2.radius;
	}

	// overload operator >
	//--------------------------------------------------------------------------
	bool operator>(const Circle& c2) {
		return this->radius > c2.radius;
	}
};

// overload operator <<
//------------------------------------------------------------------------------
static ostream& operator<<(ostream& os, const Circle& c) {
	os << "Radius " << c.radius << ' ';
	return os;
}
#endif	// CIRCLE_H

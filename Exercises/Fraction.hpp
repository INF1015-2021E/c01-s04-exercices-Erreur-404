///
/// Exemple de classe de fraction (numérateur/dénominateur) avec opérateurs arithmétiques.
///

#pragma once


#include <cstddef>
#include <cstdint>

#include <iostream>

using namespace std;


class Fraction {
public:
	Fraction(int numer = 0, int denom = 1);

	int getNumer() const { return numer_; }
	int getDenom() const { return denom_; }

	double getReal() const;
	Fraction& increment();

	Fraction operator+() const;
	Fraction operator-() const;
	Fraction& operator++();
	Fraction operator++(int);
	Fraction& operator--();
	Fraction operator--(int);

	Fraction operator+(const Fraction& rhs) const;
	Fraction operator+(int rhs) const;

	Fraction& operator+=(const Fraction& rhs);
	Fraction& operator+=(int rhs);

	friend Fraction operator+(int lhs, const Fraction& rhs);
	friend ostream& operator<<(ostream& lhs, const Fraction& rhs);

	// Moi
	Fraction operator*(const Fraction& rhs) const;
	friend Fraction operator*(int lhs, const Fraction& rhs);

	Fraction operator/(const Fraction& rhs) const;		// define
	friend Fraction operator/(int lhs, const Fraction& rhs);	// define

private:
	void simplify();

	int numer_;
	int denom_;
};


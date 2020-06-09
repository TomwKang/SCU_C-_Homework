#pragma once


int Min(int a, int b)
{
	return a < b ? a : b;
}

class rational
{
private:
	int denominator;
	int numerator;
public:
	rational(int n=0, int d=0)
		:denominator(d),numerator(n){}
	void print();
	void optimization();
	double real(const rational& r1);
	friend rational operator + (const rational& r1, const rational& r2);
	friend rational operator - (const rational& r1, const rational& r2);
	friend rational operator * (const rational& r1, const rational& r2);
	friend rational operator / (const rational& r1, const rational& r2);
};

//rational::rational(int d = 0, int n = 0)
//{
//	this->denominator = d;
//	this->numerator = n;
//}

void rational::print()
{
	cout << "("<<this->numerator << "/" << this->denominator <<")"<< endl;
}

void rational::optimization()
{
	int max = 1;
	int min = Min(this->denominator, this->numerator);
	for (int i = 2; i <= min; i++)
	{
		if (!(this->denominator % i) && !(this->numerator % i))
			max = i;
	}
	this->denominator /= max;
	this->numerator /= max;
}

double rational::real(const rational& r1)
{
	return r1.numerator / r1.denominator;
}

rational operator + (const rational& r1, const rational& r2)
{
	rational r;
	r.denominator = r1.denominator * r2.denominator;
	r.numerator = r1.numerator * r2.denominator + r1.denominator * r2.numerator;
	r.optimization();
	return r;
}

rational operator - (const rational& r1, const rational& r2)
{
	rational r;
	r.denominator = r1.denominator * r2.denominator;
	r.numerator = r1.numerator * r2.denominator - r1.denominator * r2.numerator;
	r.optimization();
	return r;
}

rational operator * (const rational& r1, const rational& r2)
{
	rational r;
	r.denominator = r1.denominator * r2.denominator;
	r.numerator = r1.numerator * r2.numerator ;
	r.optimization();
	return r;
}

rational operator / (const rational& r1, const rational& r2)
{
	rational r;
	r.denominator = r1.denominator * r2.numerator;
	r.numerator = r1.numerator * r2.denominator;
	r.optimization();
	return r;
}
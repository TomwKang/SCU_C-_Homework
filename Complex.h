#pragma once

class Complex
{
private:
	double real;
	double image;
public:
	Complex(double r=0, double i=0)
		:real(r), image(i){}
	void print();

	friend Complex operator + (const Complex& c1, const Complex& c2);
	friend Complex operator - (const Complex& c1, const Complex& c2);
	friend Complex operator * (const Complex& c1, const Complex& c2);
	friend Complex operator / (const Complex& c1, const Complex& c2);
};

//Complex::Complex(double r = 0, double i = 0)
//{
//	this->real = r;
//	this->image = i;
//}

void Complex::print()
{
	cout << "(" << this->real;
	if (this->image > 0) 
		cout << "+" << this->image << "i)" ;
	else if (this->image < 0) 
		cout << "-" << -this->image << "i)" ;
	cout << endl;		
}

Complex operator + (const Complex& c1, const Complex& c2)
{
	Complex c;
	c.image = c1.image + c2.image;
	c.real = c1.real + c2.real;
	return c;
}

Complex operator - (const Complex& c1, const Complex& c2)
{
	Complex c;
	c.image = c1.image - c2.image;
	c.real = c1.real - c2.real;
	return c;
}

Complex operator * (const Complex& c1, const Complex& c2)
{
	Complex c;
	c.image = (c1.real * c2.real) + (c1.image * c2.image);
	c.real = (c1.real * c2.image) - (c1.image * c2.real);
	return c;
}

Complex operator / (const Complex& c1, const Complex& c2)
{
	Complex c;
	c.image = ((c1.image * c2.real) - (c1.real * c2.image)) / (c2.real * c2.real + c2.image * c2.image);
	c.real = ((c1.real * c2.real) + (c1.image * c2.image)) / (c2.real*c2.real+c2.image * c2.image);
	return c;
}

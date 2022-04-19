#ifndef PROJECT_CLASSES
#define PROJECT_CLASSES
#include<iostream>
#include<cstdlib>
using namespace std;

class Complex {
private:
	double im, re;
public:
	Complex() {//����������� �� ���������.
		re = 0;
		im = 0;
	}
	Complex(double temp_re, double temp_im) {//����������� ���������������.
		re = temp_re;
		im = temp_im;
	}
	Complex(const Complex &other) {//����������� ����������� (�� ������������� � ����).
		this->im = other.im;
		this->re = other.re;
	}
	Complex Plus(Complex a);
	Complex Compos(Complex a);
	Complex Separ(Complex a);
	void Print_complex();
	~Complex() {}//����������.
	
};
/////////////////////////////////////////////

class Vector {
private:
	double x, y, z;
	double mod;
public:
	Vector() {//����������� �� ���������.
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(double a, double b, double c) {//����������� ���������������.
		x = a;
		y = b;
		z = c;
	}
	Vector(const Vector &other) {//����������� ����������� (�� ������������� � ����).
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}
	double Foo_module(Vector a);
	Vector Vect_compos(Vector a);
	void Print_vector();
	~Vector() {}//����������.
};
/////////////////////////////////////////////

class Circle {
private:
	double x_cent, y_cent, x_var, y_var, radius;
public:
	Circle() {//����������� �� ���������.
		x_cent = 0;
		y_cent = 0;
		x_var = 0;
		y_var = 0;
	}
	Circle(double temp_x_cent, double temp_y_cent, double temp_x_var, double temp_y_var) {//����������� ���������������.
		x_cent = temp_x_cent;
		y_cent = temp_y_cent;
		x_var = temp_x_var;
		y_var = temp_y_var;
	}
	Circle(const Circle& other) {//����������� ����������� (�� ������������� � ����).
		this->x_cent = other.x_cent;
		this->y_cent = other.y_cent;
		this->x_var = other.x_var;
		this->y_var = other.y_var;
	}
	int Radius();
	void Print_radius();
	~Circle() {}//����������.
};
#endif

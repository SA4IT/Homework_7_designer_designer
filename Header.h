#ifndef PROJECT_CLASSES
#define PROJECT_CLASSES
#include<iostream>
#include<cstdlib>
using namespace std;

class Complex {
private:
	double im, re;
public:
	Complex() {//конструктор по умолчанию.
		re = 0;
		im = 0;
	}
	Complex(double temp_re, double temp_im) {//конструктор параметрический.
		re = temp_re;
		im = temp_im;
	}
	Complex(const Complex &other) {//конструктор копирования (не использовался в коде).
		this->im = other.im;
		this->re = other.re;
	}
	Complex Plus(Complex a);
	Complex Compos(Complex a);
	Complex Separ(Complex a);
	void Print_complex();
	~Complex() {}//деструктор.
	
};
/////////////////////////////////////////////

class Vector {
private:
	double x, y, z;
	double mod;
public:
	Vector() {//конструктор по умолчанию.
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(double a, double b, double c) {//конструктор параметрический.
		x = a;
		y = b;
		z = c;
	}
	Vector(const Vector &other) {//конструктор копирования (не использовался в коде).
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}
	double Foo_module(Vector a);
	Vector Vect_compos(Vector a);
	void Print_vector();
	~Vector() {}//деструктор.
};
/////////////////////////////////////////////

class Circle {
private:
	double x_cent, y_cent, x_var, y_var, radius;
public:
	Circle() {//конструктор по умолчанию.
		x_cent = 0;
		y_cent = 0;
		x_var = 0;
		y_var = 0;
	}
	Circle(double temp_x_cent, double temp_y_cent, double temp_x_var, double temp_y_var) {//конструктор параметрический.
		x_cent = temp_x_cent;
		y_cent = temp_y_cent;
		x_var = temp_x_var;
		y_var = temp_y_var;
	}
	Circle(const Circle& other) {//конструктор копирования (не использовался в коде).
		this->x_cent = other.x_cent;
		this->y_cent = other.y_cent;
		this->x_var = other.x_var;
		this->y_var = other.y_var;
	}
	int Radius();
	void Print_radius();
	~Circle() {}//деструктор.
};
#endif

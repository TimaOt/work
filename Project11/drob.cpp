#include <iostream>
#include "Drob.h"

drob::drob(int x, int y)
{
	if (y == 0)
		y = 1;
	this->x = x;
	this->y = y;
}

void drob::setX(int x)
{
}

void drob::sety(int y)
{
}

int drob::getx()
{
	return 0;
}

int drob::gety()
{
	return 0;
}

void drob::printDrob()
{
	cout << x << "/" << y << "=" << (double)x / y;
}
void drob::operator+=(const drob & obj)
{
	this->x = obj.y*this->x + this->y*obj.x;
	this->y = obj.y*this->y;
}

void drob::operator-=(const drob & obj)
{
	this->x = obj.y*this->x - this->y*obj.x;
	this->y = obj.y*this->y;
}

void drob::operator*=(const drob & obj)
{
	this->x = obj.y*this->x * this->y*obj.x;
	this->y = obj.y*this->y;
}

void drob::operator/=(const drob & obj)
{
	this->x = this->x*obj.y;
	this->y = obj.x*this->y;
}
double drob::getDouble() const
{
	
	return double(x)/y;
}
const drob& drob::operator++()
{
	this->x += this->y;
	return *this;
}
drob drob::operator++(int)
{
	drob tmp(this->x, this->y);
	this->x += this->y;
	return tmp;
}



drob drob::operator--()
{//префикстный
	this->x -= this->y;
	return *this;
}
//drob drob::operator+(const drob & obj)
//{
//	//1
//	//drob tmp;
//	//tmp.x = this->x;
//	//tmp.y = this->y;
//	//2
//	//drob tmp(this->x, this->y);
//	drob tmp(*this);
//	tmp += obj;
//	return tmp;
//}

drob operator+(const drob & a, const drob & b)
{
	drob tmp(a);
	tmp += b;
	return tmp;
}

drob operator-(const drob & a, const drob & b)
{
	drob tmp(a);
	tmp -= b;
	return tmp;
}

drob operator*(const drob & a, const drob & b)
{
	drob tmp(a);
	tmp *= b;
	return tmp;
}

drob operator/(const drob & a, const drob & b)
{
	drob tmp(a);
	tmp /= b;
	return tmp;
}

bool operator==(const drob & a, const drob & b)
{

	return a.getDouble()==b.getDouble();
}

bool operator!=(const drob & a, const drob & b)
{
	return a.getDouble() != b.getDouble();
}

bool operator>(const drob & a, const drob & b)
{
	return a.getDouble() > b.getDouble();
}

bool operator<(const drob & a, const drob & b)
{
	return a.getDouble() < b.getDouble();
}

bool operator>=(const drob & a, const drob & b)
{
	return a.getDouble() <=b.getDouble();
}

bool operator<=(const drob & a, const drob & b)
{
	return a.getDouble>=b.getDouble();
}

drob operator-(const drob&a, const drob&b)
{
	drob tmp(a)
}
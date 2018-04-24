#pragma once
#include <iostream>
using namespace std;

class drob
{
	int x;
	int y;
public:
	drob(int x = 0, int y = 1);
	void setX(int x);
	void sety(int y);
	int getx();
	int gety();
	void printDrob();
	void operator+=(const drob &obj);
	drob operator-=(const drob &obj);
	drob operator*=(const drob &obj);
	drob operator/=(const drob &obj);
	double getDouble() const;
	//префикс
	const drob& operator++();
	drob operator--();
	//прост
	drob operator++(int);
	drob operator-(a);
};

drob operator+(const drob&a, const drob&b);
drob operator-(const drob&a, const drob&b);
drob operator*(const drob&a, const drob&b);
drob operator/(const drob&a, const drob&b);
bool operator==(const drob&a, const drob&b);
bool operator!=(const drob&a, const drob&b);
bool operator>(const drob&a, const drob&b);
bool operator<(const drob&a, const drob&b);
bool operator>=(const drob&a, const drob&b);
bool operator<=(const drob&a, const drob&b);
drob operator-(const drob&a, const drob&b);
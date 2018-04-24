#include "Drob.h"
#include <iostream>

using namespace std;

void main()
{
	drob a, b;
	a.operator+=(b);
	a.printDrob();
	b.printDrob();
	system("pause");
}
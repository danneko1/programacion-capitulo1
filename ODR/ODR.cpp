#include <iostream>
using namespace std;
int add(int x, int y)
{
	return x + y;
}
int add(int x, int y) //violaci�n de ODR, ya hemos definido la funci�n add
{
	return x + y; //violaci�n de ODR, ya hemos definido x
}
int main ()
{
	int x;
	int x;
}

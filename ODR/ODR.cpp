#include <iostream>
using namespace std;
int add(int x, int y)
{
	return x + y;
}
int add(int x, int y) //violación de ODR, ya hemos definido la función add
{
	return x + y; //violación de ODR, ya hemos definido x
}
int main ()
{
	int x;
	int x;
}

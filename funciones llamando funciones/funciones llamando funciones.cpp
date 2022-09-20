#include <iostream>
using namespace std;

void doB()
{
cout<< " En doB () \ n";
}
void doA()
{
	cout<< "Iniciando doA () \ n";
	doB ();
	cout<< "Finalizando doA () \ n";
}
int main ()
{
	cout<< "Iniciando main () \ n";
	doA();
	cout<< "Finalizando main () \ n";
	return 0;
}

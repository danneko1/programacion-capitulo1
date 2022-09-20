#include <iostream>
using namespace std;
int getValueFromUser()
{
	cout<< "Ingrese un entero: ";
	int input{};
	cin>>input;
	return input;
}
int main()
{
	int num {getValueFromUser() };
	cout<<num<<" El doble es: "<<num * 2 << '\n';
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a=9,b=2;
	cout << "�ܴ��e a = "<< a << endl;
	cout << "�ܴ��e b = "<< b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "�ܴ��� a = "<< a << endl;
	cout << "�ܴ��� b = "<< b << endl;
	system("pause");
}

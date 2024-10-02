#include <iostream>
using namespace std;
int main()
{
	int a=9,b=2;
	cout << "跑传玡 a = "<< a << endl;
	cout << "跑传玡 b = "<< b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "跑传 a = "<< a << endl;
	cout << "跑传 b = "<< b << endl;
	system("pause");
}

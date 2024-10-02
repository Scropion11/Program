#include <iostream>
using namespace std;
int main()
{
	int a=9,b=2;
	bool mybool= a==b || a>b;
	bool mybool_2= !(a!=b);
	cout << mybool << endl;
	cout << mybool_2 << endl;
	system("pause");
}

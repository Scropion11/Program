#include <iostream>
using namespace std;
int main()
{
	int age;
	char educate;
	cout << "�п�J�~��: ";
	cin >> age;
	cout << "�O�_�N�Ǥ�(T/F)?";
	cin >> educate;
	if (age < 19)
	{
		cout << "�ثe���η�L" << endl;
	}
	else if (educate =='T')
	{
		cout << "�ثe���η�L!" << endl; 
	}
	else 
	{
		cout << "�ӷ�L�F!" << endl; 
	}
	system("pause");
	
	
} 

#include <iostream>
using namespace std;
int main(){
	int age = 20;
	int* ptr = &age;
	cout << "�ܼ�: "<< age << endl;
	cout << "����: "<< ptr << endl;
	cout << "���Ы��V�O�����}�����e: " << *ptr << endl;
	system("pause");
}

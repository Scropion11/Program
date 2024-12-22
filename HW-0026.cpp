#include <iostream>
using namespace std;
int main(){
	int age = 20;
	int* ptr = &age;
	cout << "變數: "<< age << endl;
	cout << "指標: "<< ptr << endl;
	cout << "指標指向記憶體位址的內容: " << *ptr << endl;
	system("pause");
}

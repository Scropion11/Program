#include <iostream>
using namespace std;
int main(){
	int expenditure[7];
	int i;
	for (i = 0;i <= 6;i++){
		cout << "��J��X: ";
		cin >> expenditure[i];
	}
	for (i = 0;i <= 6;i++){
		cout << expenditure[i] << endl;
	}
	 int total = 0;
	for (i = 0;i <= 6;i++){
		total += expenditure[i];
	}
	cout << "�`��X��" << total << endl; 
	return 0;
} 

#include <iostream>
using namespace std;
int main(){
	char choice;
	do{
		cout << "­要吃炸雞嗎?熱量很高喔!(Y/N)";
		cin >> choice;
	}
	while(choice != 'N');
	return 0;
} 

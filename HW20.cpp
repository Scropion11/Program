#include <iostream>
using namespace std;
int main(){
	char choice;
	int cost = 0;
	do{
		cout << "�Q�Y�I����\n a.�D���إq($100)\n b.�����إq($200)\n c.�C���먭($500)\n d.�F��($80)\n e.�M�s($200)\n";
		cout << "f.���b" << endl;
		cin >> choice;
		switch(choice){
			case 'a':
				cost += 100;
				cout << "�{�I�{���n�y����" << endl;
				break;
			case 'b':
				cost += 200;
				cout << "�{�I�{���n�y����" << endl;
				break;
			case 'c':
				cost += 500;
				cout << "�{�I�{���n�y����" << endl;
				break;
			case 'd':
				cost += 80;
				cout << "�{�I�{���n�y����" << endl;
				break;
			case 'e':
				cost += 200;
				cout << "�{�I�{���n�y����" << endl;
				break;
			case 'f':
				cout << "�ڭn���b" << endl;
				break;
			default:
				cout << "��J���~" << endl;
				break;		
		} 	
	}
	while(choice != 'f');
	cout << "���O���B�@�@�O: " << cost << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int num_1,num_2,ans,choice;
	cout << "�п�J��Ӿ��: ";
	cin >> num_1 >> num_2;
	cout << "1.�[�k, 2.��k, 3.���k, 4.���k";
	cin >> choice;
	switch(choice)
	{
		case 1:
			ans = num_1+num_2;
			cout << ans << endl;
			break;
		case 2:
			ans = num_1-num_2;
			cout << ans << endl;
			break;
		case 3:
			ans = num_1*num_2;
			cout << ans << endl;
			break;
		case 4:
			ans = num_1/num_2;
			cout << ans << endl;
			break;
		default:
			cout << "��J���~" << endl;
			break;
		 
	}
} 

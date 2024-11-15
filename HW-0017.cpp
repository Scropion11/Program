#include <iostream>
using namespace std;
int main()
{
	char input;
	cout << "你喜歡Kevin嗎? (Y/N): " << endl;
	cin >> input;
	while (input != 'Y')
	{
		cout << "真的不考慮一下嗎 (〒▽〒)" << endl << "請重新輸入："; 
		cin >> input;
	}
	
}  

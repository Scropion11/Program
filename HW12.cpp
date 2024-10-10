#include <iostream>
using namespace std;
int main()
{
	int p_clothes = 250,p_pant = 300,p_vest = 200;
	int n_clothes,n_pants,n_vests;
	cout << "請輸入欲購買的上衣數量:"; 
	cin >> n_clothes;
	cout << "請輸入欲購買的褲子數量:";
	cin >> n_pants;
	cout << "請輸入欲購買的背心數量:";
	cin >> n_vests;
	int T1 = (n_clothes)*(p_clothes);
	int T2 = (n_pants)*(p_pant);
	int T3 = (n_vests)*(p_vest);
	cout << "所選購的衣服總價格一共是:" << T1+T2+T3 << " 元" << endl;
	system("pause"); 
}  

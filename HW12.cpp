#include <iostream>
using namespace std;
int main()
{
	int p_clothes = 250,p_pant = 300,p_vest = 200;
	int n_clothes,n_pants,n_vests;
	cout << "�п�J���ʶR���W��ƶq:"; 
	cin >> n_clothes;
	cout << "�п�J���ʶR���Ǥl�ƶq:";
	cin >> n_pants;
	cout << "�п�J���ʶR���I�߼ƶq:";
	cin >> n_vests;
	int T1 = (n_clothes)*(p_clothes);
	int T2 = (n_pants)*(p_pant);
	int T3 = (n_vests)*(p_vest);
	cout << "�ҿ��ʪ���A�`����@�@�O:" << T1+T2+T3 << " ��" << endl;
	system("pause"); 
}  

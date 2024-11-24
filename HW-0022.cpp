#include <iostream>
using namespace std;
int main(){
	int i,j,k;
	for (i=1; i<=5; i++){
		for (j=5-i;j>0;j--)
		{
			cout << " ";
		}
		for (k=2*i-1;k>0;k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

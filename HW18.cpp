#include <iostream>
using namespace std;
int main(){
	int my_num = 50;
	int guess;
	int time = 0;
	int max_num = 100;
	int min_num = 0;
	
	while(1){
		cout << "�q�@��" <<  min_num << "��" << max_num << "��������: ";
		cin >> guess;
		time++;
		if(guess == my_num){
			cout << "BANG!����F! " << "�@�@�q�F" << time << "��";
			break;
		}
		else if(guess>= my_num && guess <= max_num){
			max_num = guess;
		}
		else if(guess<= my_num && guess >= min_num){
			min_num = guess;
		}
		else{
			cout << "�O�x�F!!" << endl; 
		}
		
	}	
	
}

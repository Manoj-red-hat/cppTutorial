#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &ref){
	vector<int>::iterator itr;
	for(itr=ref.begin();itr<ref.end();itr++){cout<<*itr<<endl;}
}
int main(){
	vector<int> number;
	number.push_back(1);
	number.push_back(2);
	number.push_back(3);
	number.push_back(4);
	number.push_back(5);
	number.push_back(6);

	print(number);
}

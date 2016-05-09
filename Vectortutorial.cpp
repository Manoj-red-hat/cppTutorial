#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &numref){
	
	vector<int>::iterator itr;
	for(itr=numref.begin();itr<numref.end();itr++)
		cout<<*itr;
}

int main(){

	vector<int> number;
	vector<int> test(4,1);
	number.push_back(1);
	number.push_back(2);
	number.push_back(3);
	//number.push_back(0);
	number.push_back(1);
	std::cout<<number.capacity()<<"size"<<number.size()<<"\n";
	print(number);
	test.push_back(3);
	std::cout<<"\n"<<test.capacity()<<"size"<<test.size()<<"\n";
	print(test);
}

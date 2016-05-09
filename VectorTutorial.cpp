#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void print(vector<int> &ref){
	vector<int>::iterator itr;
	/*Using ostream iterator */	
	copy(ref.begin(),ref.end(),ostream_iterator<int>(cout,","));
	cout<< "  size is "<<ref.size()<<\n";

	/*Using for loop*/
	//for(itr=ref.begin();itr<ref.end();itr++){cout<<*itr<<endl;}
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
	number.insert(number.begin()+5,12); //insert a element and expand
	print(number);
	number.erase(number.begin()+2); //erase a element and squueze vector
	print(number);
	number.push_back(34); //Push a element at end
	print(number);
	
}

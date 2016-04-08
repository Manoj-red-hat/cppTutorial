#include <iostream>
#include <vector>

using namespace std;

template <class k, class v>

class MyMap{
	private:
		std::vector<k> keys;
		std::vector<v> values;
	public:
		void insert(k key,v value ){
			keys.push_back(key);
			values.push_back(value);
		}	

		void getValue(int n){
			std::cout<<keys[n]<<" <-- key"<<" value-->"<<values[n];
		}
};

int main(){
	dsafw
		sf
		fsfd
		;
	MyMap<int,std::string> map;
	map.insert(1,"manoj");
	map.getValue(0);
}

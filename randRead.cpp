#include <iostream>
#include <map>
#include <cstdlib>
#include <utility>
#include <ctime>
using namespace std;

int main(int argv, char **args){
	 map<int,int> dataMap;
	 map<int,int>::iterator iter;
	 time_t t;
	 srand((unsigned) time(&t));
	 int len=100;
	 int itr=0;
	 while(len >itr ){
		int base;
		int range;
	 	range=rand()%10+10;
		base=itr;
		itr+=(range);
		if((range+base)>len){
			range=len-base;
		}
		dataMap[base]=range;
	 }
	 for(iter=dataMap.begin();iter!=dataMap.end();iter++){
		std::cout<<iter->first<<"--";
		std::cout<<iter->second<<"\n";
	 }
	 std::cout<<dataMap.size();
	 std::cout<<dataMap[3];
	 return 0;
}

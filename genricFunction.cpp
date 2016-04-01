/*
 * genricFunction.cpp
 *
 *  Created on: 27-Mar-2016
 *      Author: manoj
 */
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

template <typename T>

void sortGenric( vector<T> &arg){
	typename  vector<T>::iterator it;
	typename vector< T>::iterator iit;
	T max=0;
	for (it=arg.begin();it<arg.end();it++){
		for(iit=it+1;iit<arg.end();iit++){
			max=*it;
			if(max<*iit){
				max=*iit;
				*iit=*it;
				*it=max;
			}
		}

	}
}



int main(){
	vector<int> number(10);
	vector<int>::iterator it;
	for (it=number.begin();it<number.end();it++){
		*it=rand()%100;
		cout<<*it<<" ";
	}
	cout<<endl;

	sortGenric(number);
	for (it=number.begin();it<number.end();it++){
		cout<<*it<<" ";
	}
    cout<<endl;

	vector<char>::iterator cv;
	vector<char> charList(10);
	for (cv=charList.begin();cv<charList.end();cv++){
		*cv=65+rand()%10;
		cout<<(char)*cv<<" ";
	}
	cout<<endl;

	sortGenric(charList);
	for (cv=charList.begin();cv<charList.end();cv++){
		cout<<*cv<<" ";
	}

}

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

T max(T arg1, T arg2, bool asc=true){
	return asc==true ? ((arg1 > arg2) ? arg1 : arg2) : ((arg1 > arg2) ? arg2 : arg1);
}

int GENmain(){
	vector<int> number(10);
    vector<int>::iterator it;
    for (it=number.begin();it<number.end();it++){
    	 *it=rand();
    	 cout<<*it<<" ";
    }
    cout<<endl;
    vector<int>::const_iterator itc;
    for (itc=number.begin();itc<number.end();itc++){
       	 cout<<*itc<<" ";
       }



}

#include <iostream>
#include <sstream>   //String stream
#include <vector>
using namespace std;
class Animal{
public:
	virtual string talk()=0;
};

class Cat : public Animal{
public:
	Cat(){}
	virtual string talk(){
		return "MEOW MEOW";
	}
   virtual ~Cat(){cout<<"Cat dctor called"<<endl;}

};

class Dog : public Animal{
public:
	Dog(){}
	virtual string talk(){
			return "BARK BARK";
		}
    virtual ~Dog(){cout<<"Dog dctor called"<<endl;}
;
};

int Absmain(){
	Cat b;
	Dog d;
	vector<Animal*> animal;
	animal.push_back(&b);
	animal.push_back(&d);
	for (unsigned int i=0;i<animal.size();++i)
			cout<<animal[i]->talk()<<endl;


}

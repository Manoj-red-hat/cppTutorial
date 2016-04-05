#include <iostream>
#include <stdexcept>
#include <typeinfo>
using namespace std;
class base{
	public:
	virtual	 void printClass(){std::cout<<"base"<<std::endl;}
};
class derived:public base{
	public:
	virtual	 void printClass(){std::cout<<"derived"<<std::endl;}
};

int main(){
base a,*b;
derived c,*d;
a.printClass();
c.printClass();
try{
	b=&c;
	b->printClass();
	derived *d1=dynamic_cast<derived*> (&b);
	//d->printClass();
}catch(std::bad_cast e)
{
	cout<<e.what();
}

int *aInt=NULL;
	try{
              aInt= new int[10000000000000];	
	}catch(std::bad_alloc e){
		std::cout<<e.what();
	}
}

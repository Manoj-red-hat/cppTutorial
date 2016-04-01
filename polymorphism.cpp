#include <iostream>
#include <sstream>   //String stream
#include <vector>

using namespace std;
// base Class
class EmployeePoly{

	protected:
	double pay;
	string name;
	public:
	EmployeePoly(){name="";pay=0;}
	EmployeePoly(string empName, double payRate){
		name=empName;
		pay=payRate;
	}
	//virtual ~EmployeePoly(){cout<<"Employee distructor called"<<endl;}

	string getName(){
		return name;
	}

	void setName(string empName){
		name=empName;
	}

	double getPay(){
		return pay;
	}

	void setPay(double payRate){
		pay=payRate;
	}

	 virtual  int grossPay(int hours){
		return pay*hours;
	}

	string toString(){
		stringstream stm;
		stm<<name<<" : " <<pay;
		return stm.str();
	}
};

//Base class

class ManagerPoly: public EmployeePoly{
private:
	bool isSalried;
public:
	ManagerPoly(string empName, int payRate, bool salried):EmployeePoly(empName,payRate){
		isSalried=salried;
	}
	 //virtual ~ManagerPoly(){cout<<"Manager distructor called"<<endl;}
	bool getIsSalriedEmp(){

		return isSalried;
	}

	virtual   int grossPay(int hours){
		if (isSalried)
			return pay;
		else
			return pay*hours;
	}

	string toString(){
			stringstream stm;
			string salary;
			if (isSalried)
				salary="Salaried";
			else
				salary="Hourly";

			stm<<name<<" : " <<pay<<" : "<<salary;
			return stm.str();
		}

};
	int Polymain()
{
		EmployeePoly emp("Jane Smith",350);
		ManagerPoly mgr("Ram Prakash",2000,"TRUE");
		EmployeePoly *base;
		cout<<mgr.grossPay(50)<<endl;
		base=&mgr;
		cout<<base->grossPay(50)<<endl;

//		virtual Distructor
//		EmployeePoly *empPtr;
//		empPtr=&mgr;
//		delete empPtr;



//		Polymorphism Example
//		vector<EmployeePoly*> empVector;
//		empVector.push_back(&emp);
//		empVector.push_back(&mgr);
//
//		for (unsigned int i=0;i<empVector.size();++i){
//			cout<<empVector[i]->grossPay(50)<<endl;
//		}

//		Object Slicing example
//		vector<EmployeePoly> empVector1;
//		empVector1.push_back(emp);
//		empVector1.push_back(mgr);
//		for (int i=0;i<empVector.size();++i){
//					cout<<empVector1[i].grossPay(50)<<endl;
//				}

}

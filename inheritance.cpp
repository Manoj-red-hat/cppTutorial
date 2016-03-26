#include <iostream>
#include <sstream>   //String stream

using namespace std;
// base Class
class Employee{

	protected:
	double pay;
	string name;
	public:
	Employee(){name="";pay=0;}
	Employee(string empName, double payRate){
		name=empName;
		pay=payRate;
	}

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

	int grossPay(int hours){
		return pay*hours;
	}

	string toString(){
		stringstream stm;
		stm<<name<<" : " <<pay;
		return stm.str();
	}
};

//Base class

class Manager: public Employee{
private:
	bool isSalried;
public:
	Manager(string empName, int payRate, bool salried):Employee(empName,payRate){
		isSalried=salried;
	}

	bool getIsSalriedEmp(){

		return isSalried;
	}

	int grossPay(int hours){
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
	int INmain()
{
	Employee emp1("Jane Smith",350);
	cout<<emp1.toString();
	cout<< " gross pay "<<emp1.grossPay(40)<<endl;

	Manager emp3("Ram Prakash",200000,"TRUE");
	cout<<emp3.toString();

}

#include <iostream>
#include <sstream>   //String stream

using namespace std;
// base Class
class Employee{
	private:
	string name;
	double pay;
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

	string toString(){
		stringstream stm;
		stm<<name<<" : " <<pay;
		return stm.str();
	}
};

//Base class

class Manager: Employee{
private:
	bool isSalried;
public:
	Manager(string empName, int payRate, bool salried):Employee(empName,payRate){
		isSalried=salried;
	}

	bool getIsSalriedEmp(){
		return isSalried;
	}

};
	int main()
{
	Employee emp1("Jane Smith",35000);
	Employee emp2("Bill Brown",56000);
	cout<<emp1.toString()<<endl;
	cout<<emp2.toString()<<endl;
	Manager emp3("Ram Prakash",2000000,"TRUE");
	emp3.getIsSalriedEmp();
}

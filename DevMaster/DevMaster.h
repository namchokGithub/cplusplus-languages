#ifndef DEVMASTER_H
#define DEVMASTER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class DevMaster
{
	public: 
		// constructor
		DevMaster();
		
		// set value
		void setName(string name);
		void setMoney(double money);
		void setSalary(double salary);
		
		// increase or decrease value
		void upLevel();
		void addMoney(double money);
		void reduceMoney(double money);
		
		// get value 
		int getLevel();
		string getName();
		double getMoney();
		double getSalary();
		
	protected:
		string name;
		int level_dm;
		double money;
		double salary;
		
};

#endif

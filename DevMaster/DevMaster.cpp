#include "DevMaster.h"
// File name :: DevMaster.cpp	

/* 
 * DevMaster (constructor)
 * set default of data
 * input : none 
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
DevMaster::DevMaster(){
		this->name = "";
		this->level_dm = 0;
		this->money = 0;
		this->salary = 0;
}
		
/* 
 * setName(string name)
 * set name of devmaster
 * input : name type string
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
void DevMaster::setName(string name){
	this->name = name;
}

/* 
 * setMoney(double money)
 * set money of devmasterr
 * input : money type double
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
void DevMaster::setMoney(double money){
	this->money = money;
}

/* 
 * setSalary(double salary)
 * set salary of devmaster
 * input : salary type double
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
void DevMaster::setSalary(double salary){
	this->salary = salary;
}
	
/* 
 * upLevel()
 * up level of devmaster
 * input : none 
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
void DevMaster::upLevel(){
	this->level_dm++;
}

/* 
 * addMoney(double money)
 * add money of devmaster
 * input : money of devmaster
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
void DevMaster::addMoney(double money){
	this->money += money;
}

/* 
 * reduceMoney(double money)
 * reduce money of devmaster
 * input : money type double
 * output : none
 * author : Namchok 
 * Create Date : 2562-05-27
 */
void DevMaster::reduceMoney(double money){
	this->money -= money;
}
		
/* 
 * getLevel()
 * get level of devmaster
 * input : none
 * output : level type integer
 * author : Namchok 
 * Create Date : 2562-05-27
 */
int DevMaster::getLevel(){
	return this->level_dm;
}

/* 
 * getName()
 * get naem of devmaster
 * input : none 
 * output : name type string
 * author : Namchok 
 * Create Date : 2562-05-27
 */
string DevMaster::getName(){
	return name;
}

/* 
 * getMoney()
 * get money of dewvmaster
 * input : none 
 * output : money type double
 * author : Namchok 
 * Create Date : 2562-05-27
 */
double DevMaster::getMoney(){
	return this->money;
}

/* 
 * getSalary()
 * get salary of devmaster
 * input : none 
 * output : salary type double
 * author : Namchok 
 * Create Date : 2562-05-27
 */
double DevMaster::getSalary(){
	return this->salary;
}

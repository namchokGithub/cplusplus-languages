#include <iostream>

using namespace std;

// triangle area
// input base and height
// output area of tringle
float triangle(int base, int height){
	return base*height*0.5;
}

// reverse number
void reverse(int number){
	cout << "Number " << number << " to ";
	int mod = number%10;
	cout << mod;
	number = (number - mod)/10;
	mod = number % 10;
	cout << mod;
	number = (number - mod)/10;
	mod = number % 10;
	cout << mod;
	number = (number - mod)/10;
	cout << mod;
	cout << endl;
}

int main(){
	
	cout << "====== Day 1 ========" << endl << endl;
	
//	Triangle
//	int base = 0, height = 0;
//	
//	cout << "====== Triangle area ======" << endl << endl;
//	cout << "Please enter base: ";
//	cin >> base;
//	cout << "Please enter height: ";
//	cin >> height;
//	cout << endl << "====== Result " << triangle(base, height) << " ======" << endl << endl;
	
// 	Reverse number
//	int number=0;
//	
//	cout << "====== Reverse number ======" << endl << endl;
//	cout << "Please enter number (1000-9999): ";
//	cin >> number;
//	cout << endl << "====== Result ======" << endl << endl;
//	reverse(number);


	
	return 0;
}

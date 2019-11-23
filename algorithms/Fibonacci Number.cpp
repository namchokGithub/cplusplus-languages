/*
 * File name: Fibonacci Number
 * Author: Namechok Singhachai
 * Date create: 2019-11-23
 */

#include <iostream>
#include <iomanip>

using namespace std;

int fibonacci(int num) {
	if(num==0 || num==1){
        return 1;
    }else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main(int argc, char const *argv[])
{
    cout << "The first number in the sequence starts at 1 (not 0)." << endl;

    cout << "That fibonacci of 3 is " << fibonacci(3) << endl;
	cout << "That fibonacci of 7 is " << fibonacci(7) << endl;
	cout << "That fibonacci of 12 is " << fibonacci(12) << endl;
	cout << "That fibonacci of 0 is " << fibonacci(0) << endl;
	cout << "That fibonacci of 1 is " << fibonacci(1) << endl;
    return 0;
}

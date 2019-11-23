/*
 * File name: Solving Exponential Equations With Logarithms
 * Author: Namechok Singhachai
 * Date create: 2019-11-23
 */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int solveForExp(int a, int b) {
	int num=1;
    do {
        ++num;
        b/=a;
    }while(b/a!=1);

    return num;
    // -------------------------------------------- //
    // return log10(b)/log10(a);
}


int main(int argc, char const *argv[])
{
    cout << "a is raised to the power of what in order to equal b?" << endl;

    cout << "Find exponential of 4 equal 1024 is " << solveForExp(4, 1024) << endl;
	cout << "Find exponential of 2 equal 1024 is " << solveForExp(2, 1024) << endl;
	cout << "Find exponential of 8 equal 134217728 is " << solveForExp(8, 134217728) << endl;
	cout << "Find exponential of 19 equal 47045881 is " << solveForExp(19, 47045881) << endl;
	cout << "Find exponential of 10 equal 100000000 is " << solveForExp(10, 100000000) << endl;
    return 0;
}

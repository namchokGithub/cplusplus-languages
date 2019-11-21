/*
 * File name: Equality of 3 Values
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */

#include <iostream>
#include <iomanip>

using namespace std;

int equal(int a, int b, int c) {
	// if(a==b && a==c && b==c)
    //     return 3;
    // else if(a==b || c==a)
    //     return 2;
    // else
    //     return 0;
    // ------------------------------------------- //
    // return (a == b)? ((b == c)? 3:2):((a == c)? 2:0);
    // ------------------------------------------- //
    int count=0 ;
	  if(a==b and a==c)
		{
		count =3 ;	
		} else if(a==b or a==c or b==c)
		{
			count =2 ;
		} else  ;
	return count ; // all test case
    // ------------------------------------------- //
}

int main(int argc, char const *argv[])
{
    cout << "Equality (1, 2, 3) : " << equal(1,2,3) << endl;
    cout << "Equality (1, 2, 2) : " << equal(1,2,2) << endl;
    cout << "Equality (1, 2, 1) : " << equal(1,2,1) << endl;
    cout << "Equality (1, 1, 3) : " << equal(1,1,3) << endl;
    cout << "Equality (2, 2, 2) : " << equal(2,2,2) << endl;
    return 0;
}

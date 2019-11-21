/*
 * File name: Find the Mean of All Digits
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */

#include <iostream>
#include <iomanip>
#include <string>     // std::string, std::to_string
#include <sstream>      // char to int

using namespace std;

int mean(int a) {
    // -------------------------------------------- // 
    // string text = to_string(a);
    // int total = 0;

    // for(int i=0;i<text.length();i++){

    //     char temp = text[i];
    //     stringstream toInt;
    //     toInt << temp;
    //     int numTemp;
    //     toInt >> numTemp; 
    //     total += numTemp;
    // }
    // return total/=text.length();
    // -------------------------------------------- // 
    int meani = 0;
	int digits = 0;
	while (a>0){
		meani+=a%10;
		a/=10;
		digits++;
	}
	return meani/digits;
}


int main(int argc, char const *argv[])
{
    cout << "Mean of 42 : " << mean(42) << endl;
    cout << "Mean of 12345 : " << mean(12345) << endl;
    cout << "Mean of 666 : " << mean(666) << endl;

    return 0;
}

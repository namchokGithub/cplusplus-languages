/*
 * File name: Tower of Hanoi
 * Author: Namechok Singhachai
 * Date create: 2019-11-5
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int towerHanoi(int discs) {
	return discs==0? 0:pow(2.0,discs)-1;
}

int main(int argc, char const *argv[])
{

    cout << "The amount of discs is always a positive integer." << endl << endl;

    cout << "The discs 3 equals " << towerHanoi(3) << endl;
	cout << "The discs 5 equals " << towerHanoi(5) << endl;
	cout << "The discs 8 equals " << towerHanoi(8) << endl;
	cout << "The discs 19 equals " << towerHanoi(19) << endl;
	cout << "The discs 9 equals " << towerHanoi(9) << endl;
	cout << "The discs 13 equals " << towerHanoi(13) << endl;
	cout << "The discs 0 equals " << towerHanoi(0) << endl;
    return 0;
}

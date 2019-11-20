/*
 * File name: Matchstick Houses
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */

#include <iostream>
#include <iomanip>

using namespace std;

int matchHouses(int step) {
    // return (step>=1) ? 6+(step-1)*5 : 0;
    // -------------------------------------------------- //
	return step!=0 ? (step*5)+1 : 0;
    // -------------------------------------------------- //
}

int main(int argc, char const *argv[])
{
    cout << "This challenge will help you interpret mathematical relationships both algebraically and geometrically." << endl << endl;
    cout << "Matchstick Houses 0 : " << matchHouses(0) << endl;
    cout << "Matchstick Houses 1 : " << matchHouses(1) << endl;
    cout << "Matchstick Houses 4 : " << matchHouses(4) << endl;
    cout << "Matchstick Houses 6 : " << matchHouses(6) << endl;
    cout << "Matchstick Houses 87 : " << matchHouses(87) << endl;
    return 0;
}

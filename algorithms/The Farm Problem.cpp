/*
 * File name: The Farm Problem
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */
#include <iostream>
#include <iomanip>

using namespace std;

int animals(int chickens, int cows, int pigs) {
    // return (chickens*2) + (cows*4) + (pigs*4);
    return (chickens*2) + ((cows+pigs)*4);
}

int main(int argc, char const *argv[])
{
    cout << "\tThe Farm Problem." << endl;
    cout << "\tHave 2 chickens, 4 cows, 2 pigs" << endl;
    cout << "\tTotal leg: " << animals(2, 4, 2) << endl;

    return 0;
}

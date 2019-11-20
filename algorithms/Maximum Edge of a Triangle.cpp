/*
 * File name: Maximum Edge of a Triangle.cpp
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */
#include <iostream>
#include <iomanip>

using namespace std;

int nextEdge(int side1, int side2);

int main(int argc, char const *argv[])
{
    cout << "\tMaximum range of third edge." << endl;
    cout << "\tSide 1: 10, Side 2: 2 = " << nextEdge(10, 2) << endl;
    return 0;
}

int nextEdge(int side1, int side2){
    int third = 0;                      // maximum range of third edge.
    third = (side1 + side2) - 1;
    return third;
}

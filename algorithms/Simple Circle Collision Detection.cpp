/*
 * File name: Simple Circle Collision Detection
 * Author: Namechok Singhachai
 * Date create: 2019-11-22
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

bool isCircleCollision(std::vector<int> c1,std::vector<int> c2) {
	// // Step 1: Get the coordinates of the two centre points.
    // // Step 2: Calculate the radii of both circles as well as the sum of the radii.
    // int sumRadii = c1.at(0) + c2.at(0);

    // // Step 3: Calculate the distance between the two centre point using the standard distance formula.
    // float a = pow((c1.at(1)-c2.at(1)),2);
    // float b = pow((c1.at(2)-c2.at(2)),2);
    // float distance = sqrt(a + b);

    // // Step 4: Compare distance between centre A and B with Sum of Radii
    // return (distance < sumRadii) ? true : false;

    return ((sqrt(pow((c1.at(1)-c2.at(1)),2) + pow((c1.at(2)-c2.at(2)),2))) < (c1.at(0) + c2.at(0))) ? true : false;
    // return ((abs(c1[1] - c2[1]) + abs(c1[2] - c2[2])) <= c1[0]+c2[0]);
}

int main(int argc, char const *argv[])
{
    cout << endl << "The circles are given as two arrays containing the values in the following order: " << endl;
    cout << "1.Radius of the circle." << endl << "2.Center position on the x-axis." << endl << "3.Center position on the y-axis." << endl << endl;

    cout << "Check circle collision is " << (isCircleCollision({10,0,0},{10,10,10})? "True" : "False") << endl;
	cout << "Check circle collision is " << (isCircleCollision({10,0,0},{5,0,0})? "True" : "False") << endl;
	cout << "Check circle collision is " << (isCircleCollision({1,0,0},{1,0,0})? "True" : "False") << endl;
	cout << "Check circle collision is " << (isCircleCollision({5,0,0},{5,10,10})? "True" : "False") << endl;
	cout << "Check circle collision is " << (isCircleCollision({1,0,0},{1,10,10})? "True" : "False") << endl;

    return 0;
}

/*
 * File name: The Recamán Sequence
 * Author: Namechok Singhachai
 * Date create: 2019-11-24
 */

#include <iostream>
#include <iomanip>

using namespace std;

int recamanIndex(int n) {
	while (n>0)
    {
        return n + recamanIndex(n-1);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "The sequence starts always with 0." << endl << endl;

    cout << "Index 2 : " << recamanIndex(2) << endl;
	cout << "Index 3 : " << recamanIndex(3) << endl;
	cout << "Index 7 : " << recamanIndex(7) << endl;
	cout << "Index 20 : " << recamanIndex(20) << endl;
	cout << "Index 56 : " << recamanIndex(56) << endl;
	cout << "Index 100 : " << recamanIndex(100) << endl;
	cout << "Index 666 : " << recamanIndex(666) << endl;
	cout << "Index 1000 : " << recamanIndex(1000) << endl;
	cout << "Index 10000 : " << recamanIndex(10000) << endl;
    return 0;
}

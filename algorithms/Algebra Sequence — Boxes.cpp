/*
 * File name: Algebra Sequence — Boxes
 * Author: Namechok Singhachai
 * Date create: 2019-11-21
 */

#include <iostream>
#include <iomanip>

using namespace std;

int boxSeq(int step) {
    // int sum=0;

    // if(step==0) return 0;

	// for(int i=0;i<step;i++){
    //     if(i%2==0)
    //         sum+=3;
    //     else
    //         sum-=1;
    // }
    // return sum;

    // ------------------------------------------------------ //
    // return step/2 * 3 - step/2 * 1 + step%2 * 3;
    // ------------------------------------------------------ //
    if (step%2==0)
	{
		return step;
	}
	else
	{
		return step+2;
	}
}

int main(int argc, char const *argv[])
{
    cout << "Algebra Sequence (0) : " <<  boxSeq(0) << endl;
    cout << "Algebra Sequence (1) : " <<  boxSeq(1) << endl;
    cout << "Algebra Sequence (2) : " <<  boxSeq(2) << endl;
    cout << "Algebra Sequence (3) : " <<  boxSeq(3) << endl;
    cout << "Algebra Sequence (4) : " <<  boxSeq(4) << endl;

    return 0;
}

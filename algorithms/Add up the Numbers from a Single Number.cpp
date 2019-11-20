/*
 * File name: Add up the Numbers from a Single Number
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */

#include <iostream>
#include <iomanip>

using namespace std;

int addUp(int num) {
    // -------------------------------------------------------- //
    // if(num > 0 ){
    //     return num + addUp(num-1);
    // }else{
    //     return 0;
    // }
    // -------------------------------------------------------- //
    // int sum = 0;
	// for(int i=0;i<=num;i++){
	// 	sum += i;
	// }
	// return sum;
    // -------------------------------------------------------- //
    return (num*(num+1))/2;
    // -------------------------------------------------------- //
}

int main(int argc, char const *argv[])
{
    cout << "Number 13: " << addUp(13) << endl;
    return 0;
}

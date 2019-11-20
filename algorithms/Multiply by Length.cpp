/*
 * File name: Multiply by Length
 * Author: Namechok Singhachai
 * Date create: 2019-11-20
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

vector<int> multiplyByLength(vector<int> arr) {
    // ------------------------------------------------------ //
    // vector<int> temp;
    // for(int i=0;i<arr.size();i++){
    //     int num = arr.at(i) * arr.size();
    //     temp.push_back(num);
    // }

	// return temp;
    // ------------------------------------------------------ //
    // for(int i=0;i<arr.size();i++){
	// 	arr[i] *= arr.size();
	// }
	// return arr;
    // ------------------------------------------------------ //
    int n = arr.size();
	for(auto &i : arr)
	{
		i *= n;
	}
	return arr;
    // ------------------------------------------------------ //
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 3, 1};
    arr.push_back(0);

    for(int i=0;i<arr.size();i++){
        cout << arr.at(i) << " " ;
    }

    cout << "===== After multiply by length" << endl;

    arr = multiplyByLength(arr);

    for(int i=0;i<arr.size();i++){
        cout << arr.at(i) << " " ;
    }

    return 0;
}
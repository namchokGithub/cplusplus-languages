/*
 * File name: Find the Missing Number
 * Author: Namechok Singhachai
 * Date create: 2019-11-22
 */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int missingNum(std::vector<int> arr) {
    bool found=true;

    for(int i=1;i<11;i++) {
        for(auto number : arr) {
            if(number==i) {
                found=true;
                break;
            }else{
                found=false;
            }
        }
        if(!found){
            return i;
        }
            
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "The array of numbers will be unsorted (not in order)." << endl;
    cout << "Only one number will be missing." << endl << endl;

    cout << "Number ({1, 2, 3, 4, 6, 7, 8, 9, 10}) Missing : " << missingNum({1, 2, 3, 4, 6, 7, 8, 9, 10}) << endl;
    cout << "Number ({7, 2, 3, 6, 5, 9, 1, 4, 8 }) Missing : " << missingNum({7, 2, 3, 6, 5, 9, 1, 4, 8}) << endl;
    cout << "Number ({7, 2, 3, 9, 4, 5, 6, 8, 10}) Missing : " << missingNum({7, 2, 3, 9, 4, 5, 6, 8, 10}) << endl;
    cout << "Number ({10, 5, 1, 2, 4, 6, 8, 3, 9}) Missing : " << missingNum({10, 5, 1, 2, 4, 6, 8, 3, 9}) << endl;
    cout << "Number ({1, 7, 2, 4, 8, 10, 5, 6, 9}) Missing : " << missingNum({1, 7, 2, 4, 8, 10, 5, 6, 9}) << endl;

    return 0;
}

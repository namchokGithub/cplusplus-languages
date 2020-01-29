#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int value[3][10];
    // value[0][] = sumary of A
    // value[1] = sumary of B
    // value[2] = sumary of C
    int sum[3];
    // sum[0] = sumary of A
    // sum[1] = sumary of B
    // sum[2] = sumary of C
    for (int j = 0; j < 3; j++)
    {
        sum[j] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> value[i][j];
            sum[i] += value[i][j];
        }
    }

	if((sum[0] > sum[1] && sum[0] > sum[2] && sum[1] > sum[2]) || (sum[0] == sum[1] && sum[1] == sum[2]))  {
		cout << "ABC";
	}else if(sum[0] > sum[1] && sum[0] > sum[2] && sum[2] > sum[1]){
		cout << "ACB";
	}else if(sum[1] > sum[0] && sum[1] > sum[2] && sum[0] > sum[2]){
		cout << "BAC";
	}else if(sum[1] > sum[0] && sum[1] > sum[2] && sum[2] > sum[0]){
		cout << "BCA";
	}else if(sum[2] > sum[0] && sum[2] > sum[1] && sum[0] > sum[1]){
		cout << "CAB";
	}else if(sum[2] > sum[0] && sum[2] > sum[1] && sum[1] > sum[0]){
		cout << "CBA";
	}

    return 0;
}

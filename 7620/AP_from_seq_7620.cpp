#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include<algorithm>
//1502. Can Make Arithmetic Progression From Sequence
using namespace std;

int main()
{
    cout << "Enter the sequence" << endl;
    vector<int> arr;
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);

	}
    sort(arr.begin(), arr.end());
    const int diff = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); ++i){
            if (arr[i] - arr[i - 1] != diff){
                cout<<"False"<<endl;
            }
            else{
              cout<<"True"<<endl;
            }

    }
    return 0;
}

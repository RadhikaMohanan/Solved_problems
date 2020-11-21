#include <iostream>
#include <bits/stdc++.h>
//1290. Convert Binary Number in a Linked List to Integer

using namespace std;

int main()
{
    cout << "Enter the number of digits of binary number" << endl;
    int I;
    cin>>I;
    cout<<"Enter the array with binary number"<<endl;
    int A[I];
    for(int i=0;i<I;i++){
        cin>>A[i];
    }
    int K=0;
    for(int j=0;j<I;j++){
        cout<<A[j]<<endl;

        K += A[j]*pow(2,(I-j-1));
    }
    cout<<"The value is: "<<K<<endl;
    return 0;
}

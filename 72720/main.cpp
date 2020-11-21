#include <iostream>

//1523. Count Odd Numbers in an Interval Range

using namespace std;


int main()
{
    cout << "Enter low and high" << endl;
    int l,h;
    cin>>l>>h;
    int ct=0;
    for(int i=l;i<h+1;i++){
            if(i%2==1){
                ct+=1;
            }

    }
    cout<<ct<<endl;
    return 0;
}

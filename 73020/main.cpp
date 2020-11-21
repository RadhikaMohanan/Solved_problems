#include <iostream>

//1450. Number of Students Doing Homework at a Given Time
using namespace std;

int main()
{
    cout<<"Enter the number of students"<<endl;
    int n;
    cin>>n;
    cout << "Enter the start and end times" << endl;
    int S[n],E[n];
    for(int i=0;i<n;i++){
        cin>>S[i];
        cin>>E[i];
    }
    cout<<"Enter the query time"<<endl;
    int q;
    cin>>q;
    int ct=0;
    for(int j=0;j<n;j++){
        if(S[j]<=q && E[j]>=q){
            ct+=1;
        }
    }
    cout<<"OP: "<<ct<<endl;
    return 0;
}

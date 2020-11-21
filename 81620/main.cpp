#include <iostream>

//1553. Minimum Number of Days to Eat N Oranges

using namespace std;

int main()
{
    cout << "Enter number of oranges" << endl;
    int n;
    cin>>n;
    int ct=0;
    while(n>0){
        if(n%3==0){n=n-2*(n/3);
        ct+=1;}
        else if(n%2==0){n=n-(n/2);
        ct+=1;}
        else{
            n=n-1;
            ct+=1;
        }
    }
    cout<<ct<<endl;

    return 0;
}

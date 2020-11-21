#include <iostream>
//1281. Subtract the Product and Sum of Digits of an Integer

using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin>>n;
    int s=0;
    int p=1;
    while(n>0){
           int d =n%10;
           p*=d;
           s+=d;
           n/=10;

    }
    cout<<p-s<<endl;
    return 0;
}

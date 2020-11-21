#include <iostream>
//231. Power of Two
using namespace std;
int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin>>n;
    if(n%2==0 || n==1){
    while(n>1){
        if(n%2==0){
          n=n/2;
        }
        else{
            break;
        }
    }
    if(n==1){
        cout<<"True"<<endl;}
    else{
        cout<<"False"<<endl;}
    }
    else{
        cout<<"False"<<endl;}
    return 0;
}

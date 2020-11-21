#include <iostream>
#include <cmath>
using namespace std;

//Reverse the binary

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin>>n;
    int i=0;
    int A[32];
    while(n>0){
        A[i]=n%2;
        n=n/2;`
        i++;
    }

    int val=0;
    for(int j=0;j<i;j++){
            if(A[j]==0){
                A[j]=1;
            }
            else{
                A[j]=0;
            }
       // cout<<A[j]<<endl;
        val=val+pow(2,j)*A[j];

    }
    cout<<val<<endl;

    return 0;
}

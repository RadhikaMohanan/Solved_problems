#include <iostream>
//1535. Find the Winner of an Array Game

using namespace std;

int main()
{
    cout << "Integer array element number " << endl;
    int n;
    cin>>n;
    cout<<" Integer elements"<<endl;
    int A[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    cout << "Enter winner count number " << endl;
    int k;
    cin>>k;
    int ct=0;
    for(int j=0;j<n-1;j++){
        if(A[j]>A[j+1]){
            A[j+1]=A[j];
            ct+=1;
        }
        if(ct>=k){
            cout<<A[j]<<endl;
        }
    }

    return 0;
}

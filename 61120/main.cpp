#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    if(n%2==0){
            int p=n/2;
        cout<<A[p]<<endl;
    }
    else{
        int p=(n+1)/2;
        cout<<A[p]<<endl;

    }
    return 0;
}

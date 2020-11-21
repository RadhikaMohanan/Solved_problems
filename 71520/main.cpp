#include <iostream>

//1475. Final Prices With a Special Discount in a Shop

using namespace std;

int main()
{
    cout << "Enter the number of items " << endl;
    int n;
    cin>>n;
    cout<<"Enter the items in the list"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(A[j]>= A[k] && k>j ){
                A[j]=A[j]-A[k];
                break;
            }
        }
    }
    for(int m=0;m<n;m++){
        cout<<A[m]<<endl;
    }
    return 0;
}

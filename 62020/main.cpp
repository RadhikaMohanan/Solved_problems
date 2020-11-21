#include <iostream>
//Running Sum of 1d Array

using namespace std;

int main()
{
    cout << "Enter the number of array elements " << endl;
    int n;
    cin>>n;
    cout<<"Enter the numbers in the array "<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];
    for(int j=0;j<n;j++){
            if(j==0){
                B[j]=A[0];
            }
            else{
             B[j]=B[j-1]+A[j];
            }

        cout<<B[j];
    }
    return 0;
}

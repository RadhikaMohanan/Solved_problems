#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of elements" << endl;
    int n;
    cin>>n;
    int A[n];
    cout << "Enter the elements of array" << endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];

    for(int j=0;j<n;j++){
        int num=0;
        for(int k=0;k<n;k++){
           if(A[j]>A[k]){
            num+=1;
           }

        }
      B[j]=num;
    }
    for(int l=0;l<n;l++){
      cout<<cout << "Number of smaller elements of array is: " << B[l]<<endl;
    }

    return 0;
}

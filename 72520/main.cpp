#include <iostream>
//1287. Element Appearing More Than 25% In Sorted Array

using namespace std;

int main()
{
    cout << "Enter the number of array elements" << endl;
    int n;
    cin>>n;
    cout << "Enter the array elements" << endl;
    int A[n];
    for(int i=0;i<n;i++){
     cin>>A[i];
    }
    for(int j=0;j<n;j++){
       if(A[j]==A[j+n/4]){
        cout<<A[j]<<endl;
       }

    }
    return 0;
}

#include <iostream>

//Finding the number of digits in an array with even number

using namespace std;

int main()
{
    cout << "Enter the number of digits in array" << endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];
    for(int j=0;j<n;j++){
        int cnt=0;
        while(A[j]>0){
            A[j]=A[j]/10;
            cnt+=1;
        }
    B[j]=cnt;
    cout<<B[j]<<endl;
    }
    int cnt1=0;
    for(int k=0;k<n;k++){
        if(B[k]%2==0){
            cnt1+=1;
        }
    }
    cout<<"Number of digits with even number in the array is: "<<cnt1<<endl;
    return 0;
}

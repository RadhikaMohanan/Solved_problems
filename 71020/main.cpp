#include <iostream>
//1498. Number of Subsequences that satisfy the given sum condition
using namespace std;

int main()
{
    cout << "Enter the number " << endl;
    int n;
    cin>>n;
    cout<<"Enter the array"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout << "Enter the target" << endl;
    int t;
    cin>>t;
    int c=0;
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
                int sum=0;
                for(int l=j;l<=k;l++){
                    sum+=A[l];}
                     cout<<"sum"<<sum<<endl;
                    if(sum<=t){
                        c+=1;
                    }
                }
    }
    cout<<"the output"<<c<<endl;
    return 0;
}

#include <iostream>
//1512. Number of Good Pairs

using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin>>n;
    cout<<"Enter array"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            if(A[j]==A[k] && j!=k){
                cout<<"("<<j<<","<<k<<")"<<endl;
                c+=1;

            }
        }
    }
    cout<<"Output : "<<c<<endl;
    return 0;
}

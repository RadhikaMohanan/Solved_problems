#include <iostream>
//1488. Avoid Flood in The City


using namespace std;

int main()
{
    cout << "Enter rains number" << endl;
    int n;
    cin>>n;
    cout<<"Enter the array"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];
    for(int j=0;j<n;j++){
        if(A[j]>0){
             if(A[j]!=A[j+1]) {
                B[j]=-1;
             }

        }
        if(A[j]==0 && A[j-1]>0){
            B[j]=A[j-1];
        }
        if(A[j]==0 && A[j-1]==0){
            B[j]=A[j-3];
        }

    }
    for(int l=0;l<n;l++){
        cout<<B[l]<<"Value"<<endl;
    }

    return 0;
}

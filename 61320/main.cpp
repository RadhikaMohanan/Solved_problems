#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of elements in the array" << endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(int k=0;k<n;k++){
    int numb=0;
        for(int j=0;j<n;j++){
            if(A[k]!=A[j] ){
                    numb+=1;

            }
        }

    }


    return 0;
}

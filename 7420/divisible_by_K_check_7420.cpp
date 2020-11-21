#include <iostream>


//1497. Check If Array Pairs Are Divisible by k

using namespace std;

int main()
{
    cout << "Enter the number of elements in array:" << endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the value of K:"<<endl;
    int K;
    cin>>K;
    int E[n/2][2];
    for(int j=0;j<(n/2);j++){
             E[j][1]=A[j];
        for(int m=n/2;m<n;m++){
            if (E[j][1]+A[m]==K){
                E[j][2]=A[m];
            }
            else{
                E[j][2]=0;
            }
        }
    }
    for(int j=0;j<(n/2);j++){

      cout<<"("<<E[j][1]<<","<<E[j][2]<<")"<<endl;

        }

for(int p=0;p<(n/2);p++){

        if (E[p][1]==0 || E[p][2]==0) {
        cout << "False";
    }
    else {
        cout << "True";
}
        }


    return 0;
}

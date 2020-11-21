#include <iostream>
#include <string>

//1408. String Matching in an Array

using namespace std;

int main()
{
    cout << "Enter the number of elements" << endl;
    int n;
    cin>>n;
    cout<<"Enter the string"<<endl;
    string S[n];
    for(int i=0;i<n;i++){
        cin>>S[i];
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            if(k==j){continue;}
            if(S[j].find(S[k]) !=string::npos){
                cout<<S[j]<<endl;
            }
        }
    }
    return 0;
}

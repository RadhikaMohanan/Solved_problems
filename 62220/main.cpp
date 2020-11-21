#include <iostream>
//Stones and Jewels

using namespace std;

int main()
{
 cout<<"Enter the stone:"<<endl;
 string S;
 cin>>S;
 cout<<"Enter the Jewel:"<<endl;
 string J;
 cin>>J;
 int l=S.length();
 int lj =J.length();
 int numc=0;
 for(int i=0;i<l;i++){
    for(int j=0;j<lj;j++){
        if(S[i]==J[j]){
            numc+=1;
        }
    }
 }
 cout<<numc<<endl;
    return 0;
}


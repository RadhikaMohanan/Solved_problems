#include <iostream>
//strings check

#include<string>

using namespace std;
bool check(string A,string B){

int n=A.length();
int ct=n-1;

while( ct=0){
    char p;
    for(int i=0;i<n;i++){
        if(A[i]==B[i]){
            ct-=1;
            cout<<ct<<endl;
        }

        else{
          p=A[0];
          A[i]=A[i+1];
          A[n-1]=p;
        }
        }


}

}


int main()
{
    string A="abcde";
    string B="cdeab";

    cout<<check(A,B)<<endl;
    return 0;
}

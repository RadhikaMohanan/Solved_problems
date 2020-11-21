#include <iostream>

//1540. Can Convert String in K Moves

using namespace std;

int main()
{
    cout << "Enter the strings s & t" << endl;
    string s,t;
    cin>>s>>t;
    cout << "Enter the integer" << endl;
    int k;
    cin>>k;
    if(s.length()==t.length()){
        int ct=0;
        for(int i=0;i<s.length();i++){
            int diff = s[i]-t[i];
            cout<<diff<<endl;
            if(abs(diff)<k){
                ct+=1;
            }

        }
        cout<<"ct: "<<ct<<endl;
      if(ct==s.length()){
        cout<<"True"<<endl;
      }
      else{
        cout<<"False"<<endl;
      }
    }
    else{
        return false;
    }
    return 0;
}

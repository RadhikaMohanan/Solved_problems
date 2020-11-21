#include <iostream>
//1544. Make The String Great

using namespace std;

int main()
{
    cout << "Enter the string" << endl;
    string S;
    cin>>S;

    for(int i=0;i<S.length();i++){
        if(abs(S[i]-S[i+1])==32){for(int j=i;j<S.length();j++){
                S[j]=S[j+2];
        }}}

    for(int k=0;k<S.length();k++){
        cout<<S[k]<<endl;
    }
    return 0;
}

#include <iostream>
//151 Reverse words in a string
using namespace std;
int main()
{ string S="a good   example";
    int n=S.length();

    for(int i=n-1;i>=0;i--){
        if (S[i]==' ')
            {
                for(int j=i+1;j<n && S[j]!=' ';j++){
                   cout<<S[j]<<endl;
                }
                cout<<' '<<endl;
        }
    }
    for(int i=0;i<n;i++){
        if (S[i]==' ')
            {for(int j=0;j<i ;j++){
                   cout<<S[j]<<endl;
                }break;
        }
    }
    return 0;
}

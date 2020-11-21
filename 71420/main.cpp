#include <iostream>

//1513. Number of Substrings With Only 1s

using namespace std;

int main()
{
    cout << "Enter the string" << endl;
    string A;
    cin>>A;
    int n=A.length();
    const int mod = 1000000007;
        int ans = 0;

        for (int i = 0, j = 0; i < n; i++) {
            if (A[i] == '1')
                ans = (ans + i - j + 1) % mod;
            else
                j = i + 1;
        }
//    int c=0;
//    for(int i=1;i<n;i++){
//        if(A[i]=='1'){
//            c+=1;
//            if(A[i+1]=='1'){
//                c+=1;
//            if(A[i+2]=='1'){
//                c+=1;
//
//            }
//
//            }
//        }
//
//    }
    cout<<"ans"<<ans<<endl;
    return 0;
}

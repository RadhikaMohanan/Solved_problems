#include <iostream>
//Find the difference (incomplete)

using namespace std;

int main()
{
    cout << "Enter the string" << endl;
    string A;
    cin>>A;
    int n=A.size();
    cout << "Enter the mixed-up string" << endl;
    string B;
    cin>>B;
    int m=B.size();
    if(m>n){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(A[i]==B[j]){
                        B[j]="0";
                    }

            }

    }

    }

    return 0;
}

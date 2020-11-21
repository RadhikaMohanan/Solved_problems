#include <iostream>
#include <bits/stdc++.h>
//1262. Greatest Sum Divisible by Three

using namespace std;

int main()

{
    cout << "Enter the array number" << endl;
    int n;
    cin>>n;
    cout<<"Enter the array element "<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
   const int MAX = 100000;
        int ans = 0;
        int m1 = MAX, mn1 = MAX;
        int m2 = MAX, mn2 = MAX;

        for (int x: A) {
            ans += x;

            if (x % 3 == 1) {
                if (x < m1) {
                    mn1 = m1;
                    m1 = x;
                } else if (x < mn1) {
                    mn1 = x;
                }
            } else if (x % 3 == 2) {
                if (x < m2) {
                    mn2 = m2;
                    m2 = x;
                } else if (x < mn2) {
                    mn2 = x;
                }
            }
        }

        if (ans % 3 == 1)
            cout<<ans - min(m1, m2 + mn2)<<endl;
        if (ans % 3 == 2)
        cout<<ans - min(m1 + mn1, m2)<<endl;

    return 0;
}

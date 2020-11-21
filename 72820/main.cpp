#include <iostream>

//1317. Convert Integer to the Sum of Two No-Zero Integers

using namespace std;

 bool check(int x) {
        while (x) {
            if (x % 10 == 0)
                return false;
            x /= 10;
        }

        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i <= n / 2; i++)
            if (check(i) && check(n - i))
                return {i, n - i};
        return {};
    }
};

//int main()
//{
//    cout << "Enter the number" << endl;
//    int n;
//    cin>>n;
//    int A[2];
//      if(n%10==0){
//                cout<<"["<<1<<","<<n-1<<"]"<<endl;
//                }
//
//    return 0;
//}

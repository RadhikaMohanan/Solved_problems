#include <iostream>

using namespace std;

//344. Reverse String

int main()
{

    cout << "Enter the string" << endl;
    string A;
    cin>>A;
    int n=A.length();
    for(int i=n-1;i>=0;i--)
    cout<< A[i];

    return 0;
}

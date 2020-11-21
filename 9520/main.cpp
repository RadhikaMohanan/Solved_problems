#include <iostream>
#include <cmath>
//441. Arranging Coins
using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin>>n;
    int ct=0;
    unsigned int num = 2 * n;
    int ans = static_cast<int>(sqrt(num + 0.25) - 0.5);
    cout<<ans<<endl;
    return 0;
}

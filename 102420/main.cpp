//989. Add to Array-Form of Integer

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A[4] = {1,2,0,0};
     int K = 34;
     int n=4;
        int X=0;
        for (int i=n-1;i>=0;i--){
            X=X+pow(10,i)*A[n-1-i];
        }
        X=X+K;
        cout<<X<<endl;
        int P=X;
    int count = 0;
    while (X != 0) {
        X = X / 10;
        ++count;
    }
    cout<<count<<endl;
    int B[count];
    for (int i=count-1;i>=0;i--){
           B[i]=P%10;
            cout<<B[i]<<endl;
              P=P/10;
        }
      return 0;
}

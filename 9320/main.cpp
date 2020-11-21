#include <iostream>
#include <math.h>       /* pow */
//970. Powerful Integers
using namespace std;

int main()
{
    cout << "Enter integers!" << endl;
    int A,B;
    cin>>A>>B;
    cout << "Enter bound" << endl;
    int bou;
    cin>>bou;
    int p=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            p=pow(A,i)+pow(B,j);
            if(abs(p)<=bou){
                cout<<p<<endl;
            }
        }
    }
    return 0;
}

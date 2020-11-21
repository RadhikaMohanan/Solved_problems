#include <iostream>
//509. Fibonacci Number

using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int N;
    cin>>N;
    int fib[N];
    for(int i=0;i<N+1;i++){
       if( i==0)
        {
        fib[0]=0;
       }
       if( i==1)
        {
        fib[1]=1;
       }
       if(i>1){
        fib[i]=fib[i-1]+fib[i-2];
       }


    }
    cout<<fib[N]<<endl;
    return 0;
}

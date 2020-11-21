#include <iostream>

//1486. XOR Operation in an Array


using namespace std;

int main()
{
    cout << "Enter the length of element" << endl;
    int n;
    cin>>n;
    cout <<" Enter the start of element"<<endl;
    int start;
    cin>>start;
    int num[n];
    cout<<"Generating the array"<<endl;
    for(int i=0;i<n;i++)
        {
        num[i]=start+ 2*i ;
        cout<<num[i]<<endl;

    }
   int b=0;
   for(int j=0;j<n;j++){

        b=b^num[j];
    }
    cout<<"Final Result:" <<b<<endl;
    return 0;
}

#include <iostream>
//492. Construct the Rectangle

using namespace std;

int main()
{
    cout << "Enter the area" << endl;
    int A;
    cin>>A;
    int cnt=0;
    for(int i=1;i<A;i++){
            if(A%i==0){
             cnt++;
            }}
    int arr[cnt];
    for(int i=1;i<A;i++){
            if(A%i==0){
             arr[i-1]=i;
            }

    }
    for(int i=0;i<cnt;i++){
            if(arr[i]<arr[cnt-i-1] && abs(arr[i]-arr[cnt-i-1])<3){
             cout<<arr[i]<<arr[cnt-i-1]<<endl;
            }

    }
    return 0;
}

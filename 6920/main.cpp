#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the integer" << endl;
    int A;
    cin>>A;
    int n=0;

    for(int i=0;i<100;i++){
        if(A==0){
            cout<<n<<endl;
        }
        else{
                    if(A%2==0){
        A=A/2;
        n+=1;
    }
    else{
        A=A-1;
        n+=1;
    }

        }


    }


    return 0;
}

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
//1499. Max Value of Equation

using namespace std;

int main()
{
    cout<<"Enter the number of elements"<<endl;
    int N;
    cin>>N;
    cout << "Enter the array" << endl;
    int A[N][2];
    for(int i=0;i<N;i++){
        cin>>A[i][0];
        cin>>A[i][1];
    }
//    for(int k=0;k<N;k++){
//          for(int j=0;j<2;j++){
//            cout<<A[k][j]<<endl;
//        }
//    }
    cout<<"Enter the integer K"<<endl;
    int K;
    cin>>K;
//    int p=0;
//    for(int x=0;x<N;x++){
//        p+=x;
//    }
    std::vector< int > arr;;
    for(int l=0;l<N-1;l++){
            for(int m=l+1;m<N;m++){
                    if(abs(A[l][0]-A[m][0])<=K){

                                int p=A[l][1]+A[m][1]+abs(A[l][0]-A[m][0]);
                                arr.push_back(p);
                    }

            }

    }
//    int maxim=val[0];
//    for(int y=1;y<p;y++){
//        if (val[y] > maxim){ maxim = val[y];
//            }
//
//
//    }
    cout<<"The max value of equation:  "<<*max_element(arr.begin(), arr.end())<<endl;
    return 0;
}

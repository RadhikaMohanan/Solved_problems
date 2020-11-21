#include <iostream>

using namespace std;

//463. Island Perimeter

int main()
{
    cout << "Enter the length and width" << endl;
    int m,n;
    cin>>m>>n;
    int A[m][n];
    cout<<"Enter the elements of 2D array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    int pem=0;
   for(int k=0;k<m;k++){
        for(int l=0;l<n;l++){
            if(A[k][l]==1){
                pem+=4;
                if(k!=0&&A[k-1][l] == 1) {
                        pem -= 2;
                }
                    if(l!=0&&A[k][l-1] == 1){pem -= 2;
                    }

            }
    }
   }
   cout<<pem<<endl;
    return 0;
}

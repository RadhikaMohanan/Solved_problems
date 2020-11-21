#include <iostream>

//Converting decimal to binary

using namespace std;

int main()
{

   cout<<"Enter the number "<<endl;
   int N;
   cin>>N;
   int binaryNum[32];
   int i = 0;
   while (N> 0) {
        binaryNum[i] = N % 2;
        N = N / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--){
             cout << binaryNum[j];

    }



    return 0;
}

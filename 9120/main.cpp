#include <iostream>
#include <list>

//1567. Maximum Length of Subarray With Positive Product

using namespace std;
int multiply(list<int> arr ,int n){
unsigned p=1;

for (list<int>::iterator it=arr.begin(); it!=arr.end(); ++it) {
        p = p * (*it);
    }
return p;
}

int main()
{
    int A[]={1,-2,3,4,6,3};
    int n=sizeof(A)/sizeof(A[0]);
    list<int> my_list;
    for(int i = 0; i<n; i++){
      my_list.push_back(A[i]);
   }
//    cout << n << endl;
    int q=multiply(my_list,n);
    while(q<0){

        my_list.pop_back();
        q=multiply(my_list,n);
        n=my_list.size();
    }
    cout<<n<<endl;
//    cout << q << endl;
    return 0;
}

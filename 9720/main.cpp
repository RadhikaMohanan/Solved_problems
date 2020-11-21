#include <iostream>

//1578. Minimum Deletion Cost to Avoid Repeating Letters

using namespace std;

int main()
{
    string s="abc";
    int cost[]={1,2,3};
    int l=s.length();
    int cc=0;
    for(int i=0;i<l;i++){
        if(s[i]==s[i+1]){
            if(cost[i]>cost[i+1]){
               cc=cc+cost[i+1];
            }
            else{
               cc=cc+cost[i];
            }

        }
    }
    cout<<cc<<endl;
    return 0;
}

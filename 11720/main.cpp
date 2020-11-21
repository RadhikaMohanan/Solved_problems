#include <iostream>
#include <vector>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
using namespace std;

int main()
{
    vector<vector<int>> points={{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    sort(points[0].begin(),points[0].end());
    for (const auto &i: points[0])
      cout << i << ' '<<endl;
   return 0;
//     int c=0;
//
//        for(int i=0;i<points.size();i++){
//            int diff= abs(points[i][0]-points[i+1][0]);
//            if(diff>c){
//                c=diff;
//            }
//          cout<<diff<<endl;
//        }


//    return c;
}


//{
//
//class Solution {
//public:
//  int maxWidthOfVerticalArea(vector<vector<int>>& points) {
//    sort(begin(points), end(points), [](const auto& p1, const auto& p2) {
//      return p1[0] != p2[0] ? p1[0] < p2[0] : p1[1] < p2[1];
//    });
//    int ans = 0;
//    for (int i = 1; i < points.size(); ++i)
//      ans = max(ans, points[i][0] - points[i - 1][0]);
//    return ans;
//  }
//};
//}

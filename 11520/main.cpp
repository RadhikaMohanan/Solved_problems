#include <iostream>

using namespace std;
//LeetCode 1641. Count Sorted Vowel Strings
int main()
{
    cout << "Intelligence is very important and it can be grown" << endl;
    int n=3;
    int a = 1, b = 1, c = 1, d = 1, e = 1;
        while(--n)
        {
            int a1 = a, b1 = b, c1 = c, d1 = d, e1 = e;
            a = (a1 + b1 + c1 + d1 + e1);
            b = (b1 + c1 + d1 + e1);
            c = (c1 + d1 + e1);
            d = (d1 + e1);
            e = e1;
        }
    cout<<a + b  + c + d +e<<endl;
        return 0;

    }

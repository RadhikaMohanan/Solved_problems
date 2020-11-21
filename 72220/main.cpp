
//1154. Day of the Year
#include <bits/stdc++.h>
using namespace std;

int days[] = { 31, 28, 31, 30, 31, 30,
               31, 31, 30, 31, 30, 31 };


int dayOfYear(string date)
{   int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8));

    if (month > 2 && year % 4 == 0) {
        ++day;
    }
    while (month-- > 0) {
        day = day + days[month - 1];
    }
    return day;
}

int main()
{
    string date = "2019-01-09";
    cout << dayOfYear(date);

    return 0;
}

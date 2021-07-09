#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string temp = str;
    //STL  to reverse something
    reverse(str.begin(), str.end());
    if (temp == str)
    {
        cout << "string is palindrome";
    }
    else
    {
        cout << "string is not a palindrome";
    }
}

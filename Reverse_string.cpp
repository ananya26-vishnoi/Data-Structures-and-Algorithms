#include <bits/stdc++.h>
using namespace std;

void rev_string(string str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        char temp = str.at(i);
        str.at(i) = str.at(str.length() - 1 - i);
        str.at(str.length() - 1 - i) = temp;
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
    }
}

int main()
{
    string s;
    cin >> s;
    rev_string(s);

    cout << endl;
    return 0;
}
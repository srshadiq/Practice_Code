#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    getline(cin, text);
    string newtext = "";
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            newtext.push_back(' ');
        }
        else
        {
            char ch = 219 - text[i];
            newtext.push_back(ch);
        }
    }
    cout << newtext << endl;
    return 0;
}
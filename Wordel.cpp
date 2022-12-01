/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        string m = "";
        pair<string, string> s1;
        cin >> s1.first >> s1.second;
        for (int i = 0; i < s1.first.length(); i++)
        {
            if (s1.first[i] == s1.second[i])
            {
                m += 'G';
            }
            else
            {
                m += 'B';
            }
        }
        cout<<m<<endl;
    }
}

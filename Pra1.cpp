/*
You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).
*/
#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        int a, b, c, d, res = 0;
        cin >> a >> b >> c >> d;
        res = a;
        if (b != a)
        {
            res += b;
            
        }
        else if (c != a)
        {
            res += c;
            
        }
        else if (d != a)
        {
            res += d;
            
        }
        if ((2 * res) == (a + b + c + d))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no"<<endl;
        }
    }
}
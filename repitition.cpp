#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int mx = 1;
    int cur = 1;
    for(int i = 0; i < (int)s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cur++;
            mx = max(mx, cur);
        }
    
        else
        {
            cur = 1;
        }
    }
    cout<<mx;   
}

// logic! if previous character matches then increase Count
// else reset to current
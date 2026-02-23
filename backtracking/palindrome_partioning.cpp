#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool ispalin(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s2 == s;
}
void getallpart(string s, vector<string> & partion, vector<vector<string>> &ans)
{
    if (s.size() == 0)
    {
        ans.push_back(partion);
    }
    for (int i = 0; i < s.size(); i++)
    {
        string part = s.substr(0, i + 1);
        if (ispalin(part))
        {
            partion.push_back(part);
            getallpart(s.substr(i + 1), partion, ans);
            partion.pop_back();
        }
    }
}
int main()
{
    string s = "aab";
    vector<string> partion;
    vector<vector<string>> ans;
    getallpart(s, partion, ans);
    for (auto vec : ans)
    {
        for (string val : vec)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
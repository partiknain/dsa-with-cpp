#include <iostream>
using namespace std;
bool isalphanum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;

    
}
bool ispalindrom(string s)
{
    
    int beg = 0;
    int end = s.length() - 1;
    while (beg <= end)
    {
        if (!isalphanum(s[beg]))
        {
            beg++;
            continue;
        }
        if (!isalphanum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[beg] != tolower(s[end])))
        {
            return false;
        }
        beg++;
        end--;
    }
    return true;
}
int main()
{
    string s = "madam";
    cout << "yes string is palindrom" << ispalindrom(s) << endl;
    return 0;
}
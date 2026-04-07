#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string result = "";

    for (int i = 0; i < s1.length(); i++)
    {
        result += (s1[i] == s2[i]) ? '0' : '1';
    }

    cout << result << endl;

    return 0;
}
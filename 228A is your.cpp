// Input 4 numbers
// Sort the numbers
// Remove duplicate using unique + erase
// Count duplicates = 4 - size of unique elements
// Print result
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << 4 - s.size() << endl;
    return 0;
}
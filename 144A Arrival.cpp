#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    int minVal = a, maxVal = a;
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> a;

        if (a > maxVal)
        {
            maxVal = a;
            maxIndex = i;
        }

        if (a <= minVal)
        {
            minVal = a;
            minIndex = i;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);

    if (minIndex < maxIndex)
    {
        moves--; // overlap case
    }

    cout << moves << endl;
    return 0;
}
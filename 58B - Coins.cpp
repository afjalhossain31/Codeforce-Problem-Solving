#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";

        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }

    cout << n << endl;

    return 0;
}
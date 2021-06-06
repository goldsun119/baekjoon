#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        int x, y;
        cin >> x >> y;

        int d = y - x;
        int r = sqrt(d);

        if (d == (r * r))
            cout << (r * 2) - 1 << endl;
        else if (d <= ((r * r) + r))
            cout << r * 2 << endl;
        else
            cout << (r * 2) + 1 << endl;
    }
}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    for (int x = 123; x <= 329; x++)
    {
        int y = 2 * x;
        int z = 3 * x;

        int d[9] = { x / 100,x / 10 % 10,x % 10,y / 100,y / 10 % 10,y % 10,z / 100,z / 10 % 10,z % 10 };

        sort(d, d + 9);

        bool ok = true;

        for (int i = 0; i < 9; i++)
        {
            if (d[i] != i + 1)
                ok = false;
        }
        if (ok)
            cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
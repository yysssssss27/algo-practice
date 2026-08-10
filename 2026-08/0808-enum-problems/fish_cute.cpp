#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);//动态数组n不确定

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int num = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                num++;
        }
        cout << num << (i < n - 1 ? " " : "\n");
    }
    return 0;
}
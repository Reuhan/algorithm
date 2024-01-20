#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> bag(n);
    for (int a = 0; a < m; a++)
    {
        int i, j, k;
        cin >> i >> j >> k;

        for (int b = i - 1; b <= j - 1; b++)
        {
            bag[b] = k;
        }
    }

    for (auto i : bag)
    {
        cout << i << " ";
    }

    return 0;
}
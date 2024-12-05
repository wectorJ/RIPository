// Кротя В 1П-23
#include <iostream>

using namespace std;

int sign(int x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n, sum = 0;
    cout << ">>";
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
        sum += sign(N[i]);
    }
    cout << "sum=" << sum;
    return 0;
}

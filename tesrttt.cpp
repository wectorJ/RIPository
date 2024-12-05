// Кротя В
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));
    int n, m, i, j, k, s, x = 0, y = 0, nom, min;
    cin >> n >> m >> k >> s;
    int N[n][m];
    int a[m];
    int b[m];
    if ((k <= 0 or k > n) or (s <= 0 or s > n))
    {
        cout << "Значення не є валідними";
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            N[i][j] = -10 + rand() % 21;
            cout << setw(5) << N[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (k - 1 == i)
            {
                a[x] = N[i][j];
                x++;
            }
            if (s - 1 == i)
            {
                b[y] = N[i][j];
                y++;
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    for (i = 0; i < m - 1; i++)
    {
        min = a[i];
        nom = i;
        for (k = i + 1; k < m; k++)
        {
            if (a[k] < min)
            {
                min = a[k];
                nom = k;
            }
        }
        a[nom] = a[i];
        a[i] = min; // обмін місцями
    }

    for (i = 0; i < m - 1; i++)
    {
        for (k = m - 2; k >= i; k--)
        {
            if (b[k + 1] > b[k])
            {
                x = b[k + 1];
                b[k + 1] = b[k];
                b[k] = x;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << "|";
    for (i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
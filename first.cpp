#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t,w,pwd;
    cin >> t;
    //this is comment for github.
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int c = 0, s = 0, i;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i = i + 2)
            {
                a[i] = -(i + 1);
                a[i + 1] = (i + 2);
                c = n / 2;
            }
        }
        if (n % 2 != 0)
        {
            for (int i = 0; i < n - 1; i = i + 2)
            {
                a[i] = (i + 1);
                a[i + 1] = (i + 2);
            }
            a[n - 1] = n;
            c = n / 2 + 1;
        }
        for (int i = 0; i < n; i++)
        {
            s = s + a[i];
            if (s > 0)
            {
                if (c < k)
                {
                    int diff = k - c;
                    for (int j = n - 1; j >= 0; j--)
                    {
                        if (a[j] < 0)
                        {
                            a[j] = abs(a[j]);
                            c++;
                        }
                        else if (c == k)
                        {
                            break;
                        }
                    }
                }
                if (c > k)
                {
                    int dif = c - k;
                    for (int l = n - 1; l >= 0; l--)
                    {
                        if (a[l] > 0)
                        {
                            a[l] = (-1) * a[l];
                            c--;
                        }
                        else if (c == k)
                        {
                            break;
                        }
                    }
                }
            }
        }
        for (int q = 0; q < n; q++)
        {
            cout << a[q] << " ";
        }
        cout << endl;
    }
    return 0;
}

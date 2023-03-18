#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, w, h;
    cin >> n >> w >> h;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> res, res1;
    for (int i = 0; i < n; i++)
    {
        res.push_back({a[i] - w, a[i] + w});
        res1.push_back({b[i] - h, b[i] + h});
    }

    // case 1:dont move
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        int x = res[i].first;
        int y = res[i].second;
        int x1 = res1[i].first;
        int y1 = res1[i].second;

        if (x1 < x || y1 > y)
        {
            check = true;
            break;
        }
    }

    if (!check)
    {
        cout << "YES" << endl;
        return;
    }

    // case 2 move right
    bool check1 = false;
    vector<pair<int, int>> store;
    for (int i = 0; i < n; i++)
    {
        int x = res[i].first;
        int y = res[i].second;
        int x1 = res1[i].first;
        int y1 = res1[i].second;

        int mn = INT_MAX;
        int mx = 0;
        if (y >= y1)
        {
            mn = 0;
        }
        else
        {
            mn = y1 - y;
        }

        if (x < x1)
        {
            mx = x1 - x;
        }

        if (x > x1)
        {
            check1 = true;
            break;
        }
        store.push_back({mn, mx});
    }
    if (!check1)
    {
        int left = store[0].first;
        int right = store[0].second;

        for (int i = 1; i < n; i++)
        {
            left = max(left, store[i].first);
            right = min(right, store[i].second);
        }

        if (right >= left)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            check1 = true;
        }
    }

        vector<pair<int, int>> store1;
    if (check1)
    {
        check1 = false;
        for (int i = 0; i < n; i++)
        {
            int x = res[i].first;
            int y = res[i].second;
            int x1 = res1[i].first;
            int y1 = res1[i].second;

            int mn = INT_MAX;
            int mx = 0;
            if (y < y1)
            {
                check1 = true;
                break;
            }
            if (x > x1)
            {
                mn = x - x1;
            }
            else
            {
                mn = 0;
            }

            if (y > y1)
            {
                mx = y - y1;
            }
            store1.push_back({mn, mx});
        }

        if (check1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int left = store1[0].first;
            int right = store1[0].second;

            for (int i = 1; i < n; i++)
            {
                left = max(left, store1[i].first);
                right = min(right, store1[i].second);
            }

            if (right >= left)
            {
                cout << "YES" << endl;
                return;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
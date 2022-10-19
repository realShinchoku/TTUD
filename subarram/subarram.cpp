#include <bits/stdc++.h>
#define ll long
using namespace std;

void solve(ll a[], ll n, ll k, vector<ll> v)
{
    if (n == 0 and k == 0)
    {
        for (auto it : v)
            cout << it << " ";

        cout << endl;

        return;
    }

    else if (n <= 0)
        return;

    else if (k == 0)
    {
        for (auto it : v)
            cout << it << " ";

        cout << endl;
    }

    else
    {
        solve(a, n - 1, k, v);
        v.push_back(a[n]);
        solve(a, n - 1, k - a[n], v);
    }
}
int main()
{
    ll m, n;
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    vector<ll>v;
           
    solve(a,n,m,v);
}
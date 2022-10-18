#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    vector<long long> f;
    f.push_back(0);f.push_back(0);
    for (int i = 1; i < n; i++){
        if(i%2 == 0)
            f.push_back(1 + f[i/2]);
        else
            f.push_back(1 + f[(i-1)/3]);
    }
    cout << f[n];
    return 0;
}
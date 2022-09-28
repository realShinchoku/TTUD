#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    vector<long long> G(n+8);
    G[1] = 1;
    G[2] = 1;
    G[3] = 3;
    for(int i = 4; i <= n ; i+=4){
        int k = i / 4;
        G[i] = G[i/2];
        G[i+2] = G[(i+2)/2];
        G[i+1] = 2 * G[2 * k + 1] - G[k];
        G[i+3] = 3 * G[2 * k + 1] - 2 * G[k];
    }
    cout << "g(" << n << ") = " << G[n];
    return 0;
}
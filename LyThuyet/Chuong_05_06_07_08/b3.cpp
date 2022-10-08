#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX], n;

void gen(int k)
{
    if (k > n)
        return;
    if(a[k-1] != 0 ){
        a[k] = 0;
        gen(k + 1);
    }
    if(a[k-1] != 1 ){
        a[k] = 1;
        gen(k + 1);
    }
}
int main()
{
    cin >> n;
    a[0] = -1;
    gen(1);
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
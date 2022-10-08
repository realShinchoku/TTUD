#include <iostream>
using namespace std;

// in các số nguyên từ 1 đến n viết đệ quy
void print(int n)
{
    if (n > 1)
        print(n - 1);
    cout << n << " ";
}
// tính tổ hợp chập k của n dựa trên công thức
// C(k, n) = C(k-1, n-1) + C(k, n-1)
int C(int k, int n)
{
    if (k == n || k == 0)
        return 1;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int fibo(int n)
{
    if (n < 2)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

const int MAX = 100;
int f[MAX];

int fibo2(int n)
{
    if (n < 2)
        return n;
    // nếu chưa tính hàm fibo(n) thì tính và lưu vào f[n]
    if (f[n] = -1)
        f[n] = fibo2(n - 1) + fibo2(n - 2);
    return f[n];
}

int ckn[MAX][MAX];
int C2(int k, int n)
{
    if (k == n || k == 0)
        return 1;
    if (ckn[k][n] == -1)
        ckn[k][n] = C2(k - 1, n - 1) + C2(k, n - 1);
    return ckn[k][n];
}

int main()
{
    print(10);
    cout << endl;

    cout << fibo(10) << endl;
    cout << fibo2(10) << endl;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            ckn[i][j] = -1;
    cout << C(15, 30) << endl;
    cout << C2(15, 30);
}
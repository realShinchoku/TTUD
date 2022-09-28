#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    vector<long long> fibo(n+6);
    fibo[0] = 0;fibo[1] = 1;fibo[2] = 2;
    for (int i = 3; i <= n; i+=3){
        fibo[i] = fibo[i/3 *2];
        fibo[i+1] = fibo[i/3 *2] + fibo[i/3 *2 +1];
        fibo[i+2] = fibo[i/3 *2] + fibo[i/3 *2 +1] + fibo[i/3*2 +2];
    }
    cout << "f("<<n<<") = " << fibo[n];
    return 0;
}
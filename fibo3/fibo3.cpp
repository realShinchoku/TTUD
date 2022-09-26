#include <iostream>
#include <vector>
using namespace std;

const int CAP = 200000000;

vector<long long> fibo(CAP,0);

int main()
{
    fibo[0] = 0,fibo[1] = 1,fibo[2] = 2;
    int n;
    cout << "Nhap n = ";
    cin >> n;
    for (int i = 3; i <= n; i+=3){
        fibo[i] = fibo[i/3 *2];
        fibo[i+1] = fibo[i/3 *2] + fibo[i/3 *2 +1];
        fibo[i+2] = fibo[i/3 *2] + fibo[i/3 *2 +1] + fibo[i/3*2 +2];
    }
    cout << "f("<<n<<") = " << fibo[n];
    return 0;
}
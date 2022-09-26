#include <iostream>
#include <cmath>
using namespace std;
const double PHI = (1 + sqrt(5)) * 0.5;

long long fib(int n){
    return pow(PHI, n) / sqrt(5) + 0.5;
}

int main(){
    long long k, n = 0 , i = 0;
    cin >> k;
    while(k >= n)
        n = fib(++i);
    cout << n;
    return 0;
}
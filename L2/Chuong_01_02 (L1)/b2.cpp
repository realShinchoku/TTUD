#include <iostream>
#include <cmath>
using namespace std;

long long fibo(int n){
    long long cur = 0, next = 1;
    for(long long i = 2; i < n; i++){
        long long temp = next;
        next += cur;
        cur = temp;
    }
    return cur;
}

int main(){
long long n;
   cin >> n;
   cout << fibo(n);
}

// Thuật toán chỉ có cộng và gán
// O(n)
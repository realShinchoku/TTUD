#include <iostream>
#include <cmath>
using namespace std;

int girdEasy(int m, int n){
    if(m == 0 && n == 0)
        return 1;
    if(m == 0 && n != 0)
        return girdEasy(m,n-1);
    else if(m != 0 && n == 0)
        return girdEasy(m-1,n);
    return girdEasy(m,n-1) + girdEasy(m-1,n);
}

int main(){
    int m,n;
    cout << "Nhap M = ";
    cin >> m;
    cout << "Nhap N = ";
    cin >> n;

    long long result = 1;

    for (int i = 0; i < m; i++) {
        result *= (n+m - i); // n * n-1 * n-2 * .... * n-(r-1)
        result /= (i + 1); // r * r-1 * ... * 1
    }
    cout << "So cach = " << result;
    
}
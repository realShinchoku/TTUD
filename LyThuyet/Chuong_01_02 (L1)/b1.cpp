#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a, b;
    cin >> a; cin >> b;
    while (b>1)
    {
        b--;
        a*=a;
    }
    if(a >= 1000000000){
        string str = to_string(a);
        for (int i=str.length() - 10; i<str.length(); ++i)
        {
            cout << str[i];
        }
        return 0;
    }
    cout << a;
}

// Thuật toán chỉ có phép nhân và phép trừ
// O(n): n phụ thuộc vào b
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "N = "; cin >> n;
    int cur = 1, next = 1;
    for(int i = 0; i < n; i ++){
        int t = next;
        next += 2*cur;
        cur = t;
    }
    cout << "So phuong an = " << cur;
    return 0;
}
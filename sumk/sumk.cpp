#include <iostream>
using namespace std;

int count(int k, int n) {
   if(n == 1)
        if(k == 1) return 1;
        else return 0;
    int h = k - n;
    if(h == 0)
        return count(k,n-1)+1;
    else if(h < n) return count(k, n-1) + count(h,h);
    else return count(k,n-1) + count(h,n-1);
}

int main(){
    int k;
    cout << "Nhap k = "; cin >> k;
    cout << "Co tat ca " << count(k,k) - 1 << " cach phan tich.";
}
#include <iostream>
using namespace std;

int subarram(int a[], int m, int n){

    
}

int main(){
    int m,n;
    cout << "Nhap m = "; cin >> m;
    cout << "Nhap n = "; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cout << "a["<<i<<"] = ";
        cin >> a[i];
    }
    cout << "Co tat ca " << subarram(a,m,n) << " cach phan tich.";
}
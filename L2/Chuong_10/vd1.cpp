#include <iostream>
using namespace std;

const int MAX = 100;
int n;
double x,a[MAX];

void nhapDuLieu(){
    cout << "N = "; cin >> n;
    for(int i =0; i <= n;i++){
        cout << "a[" << i << "] = "; cin >> a[i];
    }
    cout << "X = "; cin >> x;
}

double tinh(){
    double z =0;
    for(int i = 0; i <= n; i++){
        double p = a[i];
        for(int j = 1; j <= n-i; j++)
            p *=x;
        z+=p;
    }
    return z;
}

double P(int n){
    if(n==0) return a[0];
    return P(n-1)*x + a[n];
}

double P2(int n){
    return (n==0) ? a[0]:P2(n-1)*x + a[n];
}

int main(){
    nhapDuLieu();
    cout << "Pn(x) = " << tinh() << endl;
    cout << "Pn(x) = " << P(n) << endl;
    cout << "Pn(x) = " << P2(n);
    return 0;
}
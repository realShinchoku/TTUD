#include <iostream>
using namespace std;

const int MAX = 100;
int n, a[MAX],S;

int F(int tong, int n){
    if(n==0)
        return (tong ==0)? 1 : 0;
    return F(tong,n-1)+F(tong-a[n],n-1);
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
    }
    cin >> S;
    cout << F(S,n);
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int MIN = 0;

void diff(int a[],int s, int e, int n){
    if(min(a[e],a[s]) < MIN){
        MIN = min(a[e],a[s]);
    }
    if(e == 0)
        return;
    if(s == n)
        return;
    diff(a,s+1,e-1,n);
    diff(a,s+1,e,n);
    diff(a,s,e-1,n);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    MIN = min(a[0],a[n-1]);
    diff(a,0,n-1,n-1);
    cout << MIN;
}
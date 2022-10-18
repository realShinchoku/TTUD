#include <iostream>
using namespace std;

int main(){
    int n,c = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int cur = a[0];
    for(int i = 1; i < n; i++){
        if(cur >= a[i])
            c++;
        cur = a[i];
    }
    cout << c;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, height = 1;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 1; i < n; i++){
        if(height <= a[i]){
            height++;
        }
    }
    cout << height;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],c[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        c[i] = 1;
    }
    int count = c[0];
    for(int j=0; j < n;j++){
        int cur = a[j];
        for(int i = j+1; i < n; i++){
            if(a[i]-cur == 1){
                c[j]++;
                cur = a[i];
            }
        }
        if(count < c[j])
            count = c[j];
    }

    cout << count;
    return 0;
}
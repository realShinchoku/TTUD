#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, count = 0;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] * a[j] > m)
                count++;
        
    cout << count;
    return 0;
}
